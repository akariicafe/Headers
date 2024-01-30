@class NSString, SACommandFailed;

@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *base64EncodedProtobufMessage;
@property (retain, nonatomic) SACommandFailed *commandFailed;
@property (copy, nonatomic) NSString *jsonEncodedSlotResolutionResult;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) NSString *typeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)batchSlotResolutionResultStepResult;
+ (id)batchSlotResolutionResultStepResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
