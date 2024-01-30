@class NSSet, NSArray, NSNumber;

@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches;
@property (copy, nonatomic) NSNumber *payloadAllowRoamingCellularData;
@property (copy, nonatomic) NSNumber *payloadAllowCellularData;

+ (id)buildRequiredOnly;
+ (id)buildWithAppIdentifierMatches:(id)a0 withAllowRoamingCellularData:(id)a1 withAllowCellularData:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
