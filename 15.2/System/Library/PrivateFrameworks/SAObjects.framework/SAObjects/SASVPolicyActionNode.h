@class NSArray, NSString, SASVSpeechMetadata;

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *confirmationType;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SASVSpeechMetadata *speechMetadata;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)policyActionNode;
+ (id)policyActionNodeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
