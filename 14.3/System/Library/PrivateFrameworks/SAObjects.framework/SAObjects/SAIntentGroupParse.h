@class SAIntentGroupDirectInvocation, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupParse : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAIntentGroupDirectInvocation *directInvocation;
@property (copy, nonatomic) NSString *jsonIntent;
@property (copy, nonatomic) NSString *jsonIntentTypeName;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *nlv3Parse;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *siriKitIntent;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parse;
+ (id)parseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
