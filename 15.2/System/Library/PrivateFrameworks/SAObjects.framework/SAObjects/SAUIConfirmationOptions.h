@class NSArray, NSString;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *allConfirmationOptions;
@property (copy, nonatomic) NSString *cancelTrigger;
@property (copy, nonatomic) NSArray *confirmCommands;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSArray *denyCommands;
@property (copy, nonatomic) NSString *denyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationOptions;
+ (id)confirmationOptionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
