@class NSNumber, NSArray, NSString;

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSNumber *automaticConfirmationThreshold;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *delayExpiryCommands;
@property (copy, nonatomic) NSString *iconLabel;
@property (copy, nonatomic) NSString *iconType;
@property (copy, nonatomic) NSString *buttonRole;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *speechDuration;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationOption;
+ (id)confirmationOptionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
