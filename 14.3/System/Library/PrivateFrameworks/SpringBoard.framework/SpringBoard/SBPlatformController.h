@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject {
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    BOOL _internalInstall;
    BOOL _carrierInstall;
    long long _medusaCapabilities;
}

+ (id)sharedInstance;

- (BOOL)isInternalInstall;
- (id)uniqueDeviceIdentifier;
- (BOOL)isRoundCornerPad;
- (id)init;
- (id)hardwareModel;
- (id)productType;
- (id)deviceClass;
- (void).cxx_destruct;
- (id)systemBuildVersion;
- (long long)medusaCapabilities;
- (BOOL)isCarrierInstall;
- (BOOL)isiPadMini;
- (id)defaultIconStateDisplayIdentifiers;
- (BOOL)isRoundCornerPhone;
- (BOOL)isHomeGestureEnabled;
- (BOOL)isDeveloperDevice;
- (void)_loadDefaultIconInfo;
- (id)localizedPlatformName;
- (BOOL)prefersAlwaysOnOrientation;
- (id)defaultIconState;

@end
