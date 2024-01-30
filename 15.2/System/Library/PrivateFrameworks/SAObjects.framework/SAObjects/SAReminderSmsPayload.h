@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)smsPayload;
+ (id)smsPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
