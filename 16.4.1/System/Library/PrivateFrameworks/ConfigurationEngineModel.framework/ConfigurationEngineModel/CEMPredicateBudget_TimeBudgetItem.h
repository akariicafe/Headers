@class NSSet, NSNumber, NSArray;

@interface CEMPredicateBudget_TimeBudgetItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadSeconds;
@property (copy, nonatomic) NSArray *payloadDays;

+ (id)buildWithSeconds:(id)a0 withDays:(id)a1;
+ (id)buildRequiredOnlyWithSeconds:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
