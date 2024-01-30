@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlatform : NSObject {
    struct __CTServerConnection { } *_telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}

+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeod;
+ (id)sharedPlatform;

- (id)osVersion;
- (id)hardwareIdentifier;
- (BOOL)isInternalInstall;
- (id)productName;
- (BOOL)supportsRealisticTiles;
- (id)init;
- (id)hardwareModel;
- (void).cxx_destruct;
- (BOOL)mapsFeatureFreedomEnabled;
- (BOOL)isCellDataPossible;
- (long long)deviceScreenHeightInPixels;
- (BOOL)_deviceSupportsNavigation;
- (id)deviceCountrySKU;
- (double)deviceScreenScale;
- (BOOL)supportsNavigation;
- (void)_setupCTServerConnection;
- (long long)deviceScreenWidthInPixels;
- (void)_logCTError:(struct { int x0; int x1; })a0 message:(id)a1;
- (id)deviceCountrySKUForServiceRequests;
- (BOOL)supportsForceTouch;
- (id)clientCapabilities;
- (id)osAndBuildVersion;
- (id)buildVersion;

@end
