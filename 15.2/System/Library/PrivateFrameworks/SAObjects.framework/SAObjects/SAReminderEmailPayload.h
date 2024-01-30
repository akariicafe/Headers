@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *recipientsTo;
@property (copy, nonatomic) NSString *subject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
