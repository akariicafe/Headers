@class NSString, ACAccount;

@interface ASKClient : NSObject <ASKClientExports>

@property (retain) ACAccount *activeiTunesAccount;
@property (readonly) struct CGSize { double x0; double x1; } screenSize;
@property (readonly) double screenCornerRadius;
@property (readonly, copy) NSString *guid;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) BOOL newPaymentMethodEnabled;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *buildType;
@property (readonly) BOOL isActivityAvailable;
@property (readonly) BOOL isElectrocardiogramInstallationAllowed;
@property (readonly) BOOL isSidepackingEnabled;
@property (readonly) BOOL isTinkerWatch;
@property (readonly) BOOL supportsHEIF;
@property (readonly, copy) NSString *activePairedWatchSystemVersion;

- (BOOL)isAutomaticDownloadingEnabled;
- (id)init;
- (void).cxx_destruct;
- (id)isPairedSystemVersionAtLeast:(id)a0;
- (void)dealloc;
- (void)accountStoreDidChange:(id)a0;
- (BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)a0;
- (BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;
- (BOOL)deviceHasCapabilities:(id)a0;

@end
