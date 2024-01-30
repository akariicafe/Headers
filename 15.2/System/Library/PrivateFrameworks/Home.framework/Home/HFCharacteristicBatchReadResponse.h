@class NSSet, NSDictionary, NAIdentity, NSString;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicBatchReadResponse : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) NSDictionary *responseKeyedByCharacteristicUUID;
@property (readonly, nonatomic) NSDictionary *responsesKeyedByCharacteristicType;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly, nonatomic) NSSet *allReadResponses;
@property (readonly, nonatomic) NSSet *allCharacteristics;
@property (readonly, nonatomic) NSSet *allCharacteristicTypes;
@property (readonly, nonatomic) NSSet *allServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aggregatedMetadataForCharacteristics:(id)a0;
+ (id)aggregatedReadResponseFromResponses:(id)a0 withAggregationPolicy:(unsigned long long)a1;
+ (id)_aggregatedValueForValues:(id)a0 withAggregationPolicy:(unsigned long long)a1 metadata:(id)a2;
+ (id)_mostAbnormalValueForValues:(id)a0;
+ (id)_averageValueForValues:(id)a0 metadata:(id)a1;
+ (id)_mostCommonValueForValues:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)responseForCharacteristicType:(id)a0;
- (id)allResponsesForCharacteristicType:(id)a0;
- (id)allResponsesForCharacteristicTypes:(id)a0;
- (id)servicesWithValuesPassingTest:(id /* block */)a0 forCharacteristicType:(id)a1;
- (id)responseForCharacteristicType:(id)a0 inService:(id)a1;
- (id)initWithReadResponses:(id)a0 contextProvider:(id)a1;
- (id)responseForCharacteristicRecipe:(id)a0;
- (id)batchResponseForService:(id)a0;
- (id)responseForCharacteristicType:(id)a0 aggregationPolicy:(unsigned long long)a1;
- (id)responseForCharacteristicType:(id)a0 inServicesOfTypes:(id)a1;
- (unsigned long long)defaultAggregationPolicyForCharacteristicType:(id)a0;
- (id)_responseForCharacteristicType:(id)a0 aggregationPolicy:(unsigned long long)a1 filter:(id /* block */)a2;
- (id)allResponsesForCharacteristicRecipe:(id)a0;
- (id)_aggregatedMetadataForCharacteristicType:(id)a0;
- (id)responseForCharacteristic:(id)a0;
- (id)responseForCharacteristicType:(id)a0 inService:(id)a1 aggregationPolicy:(unsigned long long)a2;
- (id)allResponsesForCharacteristicType:(id)a0 inServicesOfTypes:(id)a1;
- (id)servicesWithValue:(id)a0 forCharacteristicType:(id)a1;
- (id)servicesWithErrorForCharacteristicType:(id)a0;

@end
