@class NSString, NSDictionary, NSArray;

@interface SAIntentGroupBatchSlotResolutionResult : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *base64EncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSDictionary *slotResolutionMap;
@property (copy, nonatomic) NSArray *stepResults;
@property (copy, nonatomic) NSString *typeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)batchSlotResolutionResult;
+ (id)batchSlotResolutionResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
