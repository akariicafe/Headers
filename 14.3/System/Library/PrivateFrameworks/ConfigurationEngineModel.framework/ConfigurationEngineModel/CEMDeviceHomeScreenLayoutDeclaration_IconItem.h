@class NSSet, NSString, NSArray;

@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadDisplayName;
@property (copy, nonatomic) NSString *payloadBundleID;
@property (copy, nonatomic) NSArray *payloadPages;
@property (copy, nonatomic) NSString *payloadURL;

+ (id)buildRequiredOnlyWithType:(id)a0;
+ (id)buildWithType:(id)a0 withDisplayName:(id)a1 withBundleID:(id)a2 withPages:(id)a3 withURL:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
