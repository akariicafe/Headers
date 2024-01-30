@class NSSet, NSString;

@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRealm;
@property (copy, nonatomic) NSString *payloadRole;
@property (copy, nonatomic) NSString *payloadGroup;
@property (copy, nonatomic) NSString *payloadLoginGroupOrDomain;

+ (id)buildRequiredOnly;
+ (id)buildWithRealm:(id)a0 withRole:(id)a1 withGroup:(id)a2 withLoginGroupOrDomain:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
