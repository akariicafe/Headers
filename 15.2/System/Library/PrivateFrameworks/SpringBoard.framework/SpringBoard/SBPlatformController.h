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

- (id)hardwareModel;
- (BOOL)isInternalInstall;
- (id)localizedPlatformName;
- (BOOL)isCarrierInstall;
- (id)productType;
- (BOOL)isiPadMini;
- (id)deviceClass;
- (id)defaultIconStateDisplayIdentifiers;
- (BOOL)isRoundCornerPhone;
- (long long)medusaCapabilities;
- (void)_loadDefaultIconInfo;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDeveloperDevice;
- (BOOL)isHomeGestureEnabled;
- (id)defaultIconState;
- (BOOL)isRoundCornerPad;
- (id)systemBuildVersion;
- (BOOL)prefersAlwaysOnOrientation;
- (id)uniqueDeviceIdentifier;

@end
