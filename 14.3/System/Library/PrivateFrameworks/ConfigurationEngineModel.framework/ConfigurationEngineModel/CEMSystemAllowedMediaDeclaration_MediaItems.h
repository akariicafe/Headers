@class NSSet, NSString, NSArray;

@interface CEMSystemAllowedMediaDeclaration_MediaItems : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadAllMedia;
@property (copy, nonatomic) NSArray *payloadCd;
@property (copy, nonatomic) NSArray *payloadDvd;
@property (copy, nonatomic) NSArray *payloadBd;
@property (copy, nonatomic) NSArray *payloadBlankcd;
@property (copy, nonatomic) NSArray *payloadBlankdvd;
@property (copy, nonatomic) NSArray *payloadBlankbd;
@property (copy, nonatomic) NSArray *payloadDvdram;
@property (copy, nonatomic) NSArray *payloadDiskImage;
@property (copy, nonatomic) NSArray *payloadHarddiskInternal;
@property (copy, nonatomic) NSArray *payloadHarddiskExternal;
@property (copy, nonatomic) NSArray *payloadNetworkdisk;

+ (id)buildRequiredOnly;
+ (id)buildWithAllMedia:(id)a0 withCd:(id)a1 withDvd:(id)a2 withBd:(id)a3 withBlankcd:(id)a4 withBlankdvd:(id)a5 withBlankbd:(id)a6 withDvdram:(id)a7 withDiskImage:(id)a8 withHarddiskInternal:(id)a9 withHarddiskExternal:(id)a10 withNetworkdisk:(id)a11;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
