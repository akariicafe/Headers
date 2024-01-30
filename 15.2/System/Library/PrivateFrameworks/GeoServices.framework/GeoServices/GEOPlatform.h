@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlatform : NSObject {
    struct __CTServerConnection { } *_telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}

+ (id)sharedPlatform;
+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;

- (id)hardwareModel;
- (BOOL)isInternalInstall;
- (BOOL)isCellDataPossible;
- (id)productName;
- (id)osVersion;
- (id)clientCapabilities;
- (BOOL)supportsAdvancedMap;
- (double)deviceScreenScale;
- (long long)deviceScreenWidthInPixels;
- (id)buildVersion;
- (id)osAndBuildVersion;
- (id)hardwareClass;
- (long long)deviceScreenHeightInPixels;
- (id)deviceCountrySKUForServiceRequests;
- (void).cxx_destruct;
- (id)init;
- (BOOL)supportsASTC;
- (BOOL)supportsNavigation;
- (id)deviceCountrySKU;
- (BOOL)supportsRealisticTiles;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)hardwareIdentifier;
- (BOOL)supportsForceTouch;

@end
