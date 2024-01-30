@class NSString, NSArray, NSURL, NRDevice;

@interface NTKCompanion3rdPartyApp : NTKCompanionApp

@property (retain, nonatomic) NRDevice *device;
@property (retain, nonatomic) NSString *complicationClientIdentifier;
@property (retain, nonatomic) NSURL *urlToComplicationBundle;
@property (retain, nonatomic) NSURL *urlToWatchKitBundle;
@property (retain, nonatomic) NSArray *supportedFamilies;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic, getter=isInstalled) BOOL installed;
@property (nonatomic) BOOL galleryBundlesLoaded;

+ (id)companion3rdPartyRemoteApp:(id)a0 device:(id)a1;
+ (BOOL)_isValidApplication:(id)a0;
+ (id)_URLOfFirstItemWithExtension:(id)a0 inDirectory:(id)a1;
+ (id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)a0;
+ (BOOL)_isValidComplicationsInformation:(id)a0;

- (void)install;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)complication;
- (BOOL)applicationHasBeenUpdated:(id)a0;
- (id)_initWithDevice:(id)a0 remoteApplication:(id)a1 galleryBundles:(id)a2 watchKitBundle:(id)a3;
- (id)_initWithWatchAppId:(id)a0 containerAppId:(id)a1 complicationClientId:(id)a2;
- (BOOL)_installStateFromAppConduitInstallState:(long long)a0;
- (id)localizedNameForRemoteApp:(id)a0;
- (id)appRegistrationDate;

@end
