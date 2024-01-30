@class NSDictionary, NSString;

@interface MIPluginKitBundle : MIAppExtensionBundle {
    NSString *_extensionPointIdentifier;
}

@property (copy, nonatomic) NSDictionary *overlaidInfoPlist;
@property (copy, nonatomic) NSString *validationOverrideParentBundleID;
@property (readonly, copy, nonatomic) NSString *nsExtensionPointIdentifier;
@property (readonly, copy, nonatomic) NSString *exExtensionPointIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *extensionAttributes;
@property (readonly, nonatomic) BOOL isWatchKitExtension;
@property (readonly, nonatomic) BOOL isSiriIntentsExtension;
@property (readonly, nonatomic) BOOL isSiriIntentsUIExtension;
@property (readonly, nonatomic) BOOL isMessagePayloadProviderExtension;
@property (readonly, nonatomic) BOOL isFileProviderNonUIExtension;
@property (readonly, nonatomic) BOOL isMapsGeoServicesExtension;
@property (readonly, nonatomic) NSDictionary *extensionPointOverlay;

+ (id)bundlesInParentBundle:(id)a0 overrideParentBundleIDForValidation:(id)a1 subDirectory:(id)a2 matchingPredicate:(id /* block */)a3 error:(id *)a4;
+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;

- (id)extensionPointIdentifier;
- (void).cxx_destruct;
- (id)_overlayDictionary:(id)a0 onDictionary:(id)a1;
- (BOOL)_validateNSExtensionWithOverlaidDictionary:(id)a0 error:(id *)a1;
- (BOOL)_validateXPCServiceWithOverlaidDictionary:(id)a0 error:(id *)a1;
- (id)currentOSVersionForValidationWithError:(id *)a0;
- (id)overlaidInfoPlistWithError:(id *)a0;
- (void)setExtensionPointOverlay:(id)a0;
- (BOOL)validateBundleMetadataWithError:(id *)a0;

@end
