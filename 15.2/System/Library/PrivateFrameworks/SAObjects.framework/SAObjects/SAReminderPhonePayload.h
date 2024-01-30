@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *phoneCallType;
@property (copy, nonatomic) NSString *recipient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phonePayload;
+ (id)phonePayloadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
