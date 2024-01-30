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
- (BOOL)isHomeGestureEnabled;
- (BOOL)isiPadMini;
- (BOOL)isCarrierInstall;
- (id)systemBuildVersion;
- (id)defaultIconState;
- (id)uniqueDeviceIdentifier;
- (id)deviceClass;
- (id)productType;
- (id)defaultIconStateDisplayIdentifiers;
- (BOOL)isInternalInstall;
- (void)_loadDefaultIconInfo;
- (BOOL)isRoundCornerPhone;
- (id)localizedPlatformName;
- (BOOL)prefersAlwaysOnOrientation;
- (BOOL)isRoundCornerPad;
- (id)init;
- (long long)medusaCapabilities;
- (void).cxx_destruct;

@end
