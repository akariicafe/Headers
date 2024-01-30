@class NSSet, NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadApps;
@property (copy, nonatomic) NSArray *payloadWebSites;
@property (copy, nonatomic) NSArray *payloadCategories;
@property (copy, nonatomic) NSArray *payloadCategoriesVersion2;

+ (id)buildWithApps:(id)a0 withWebSites:(id)a1 withCategories:(id)a2 withCategoriesVersion2:(id)a3;
+ (id)buildRequiredOnly;
+ (id)buildWithApps:(id)a0 withWebSites:(id)a1 withCategories:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
