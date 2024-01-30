@class NSSet, NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadOverridePrimary;

+ (id)buildRequiredOnly;
+ (id)buildWithOverridePrimary:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
