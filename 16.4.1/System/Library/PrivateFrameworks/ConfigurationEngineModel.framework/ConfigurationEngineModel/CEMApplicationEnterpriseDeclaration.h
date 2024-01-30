@class NSSet, NSString, CEMAssetBaseDescriptor, CEMApplicationEnterpriseDeclaration_AppPackage;

@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) CEMApplicationEnterpriseDeclaration_AppPackage *payloadAppPackage;
@property (copy, nonatomic) NSString *payloadAppPackageHashMD5;
@property (copy, nonatomic) NSString *payloadDisplayImage;
@property (copy, nonatomic) NSString *payloadDisplayImageHashMD5;
@property (copy, nonatomic) NSString *payloadFullSizeImage;
@property (copy, nonatomic) NSString *payloadFullSizeImageHashMD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withDescriptor:(id)a1 withBundleIdentifier:(id)a2 withAppPackage:(id)a3 withAppPackageHashMD5:(id)a4;
+ (id)buildWithIdentifier:(id)a0 withDescriptor:(id)a1 withBundleIdentifier:(id)a2 withAppPackage:(id)a3 withAppPackageHashMD5:(id)a4 withDisplayImage:(id)a5 withDisplayImageHashMD5:(id)a6 withFullSizeImage:(id)a7 withFullSizeImageHashMD5:(id)a8;

@end
