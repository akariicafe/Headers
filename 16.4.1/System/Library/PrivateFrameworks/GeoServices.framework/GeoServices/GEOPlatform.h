@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlatform : NSObject {
    struct __CTServerConnection { } *_telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}

+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (id)sharedPlatform;

- (BOOL)supportsMultiUser;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (id)deviceCountrySKUForServiceRequests;
- (id)productName;
- (BOOL)supportsAdvancedMap;
- (BOOL)isMacSetupUser;
- (long long)deviceScreenWidthInPixels;
- (id)deviceCountrySKU;
- (BOOL)supportsRealisticTiles;
- (BOOL)supportsNavigation;
- (id)buildVersion;
- (id)clientCapabilities;
- (BOOL)isInternalInstall;
- (id)hardwareClass;
- (double)deviceScreenScale;
- (BOOL)supportsASTC;
- (id)osVersion;
- (id)init;
- (BOOL)supportsForceTouch;
- (BOOL)isCellDataPossible;
- (long long)deviceScreenHeightInPixels;
- (id)osAndBuildVersion;
- (void).cxx_destruct;
- (BOOL)mapsFeatureFreedomEnabled;

@end
