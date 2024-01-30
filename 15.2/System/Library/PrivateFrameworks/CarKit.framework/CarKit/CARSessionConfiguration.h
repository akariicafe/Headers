@class NSString, NSArray, NSDictionary;

@interface CARSessionConfiguration : NSObject

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } dashboardRoundedCorners;
@property (nonatomic) long long defaultUserInterfaceStyle;
@property (nonatomic) BOOL supportsElectronicTollCollection;
@property (copy, nonatomic) NSString *manufacturerIconLabel;
@property (nonatomic) BOOL manufacturerIconVisible;
@property (copy, nonatomic) NSArray *manufacturerIcons;
@property (nonatomic) BOOL hasAccessory;
@property (copy, nonatomic) NSDictionary *infoResponse;
@property (readonly, nonatomic) NSArray *altScreenSuggestUIURLs;
@property (readonly, nonatomic) NSArray *lastOnDisplayUIContextURLs;
@property (readonly, nonatomic) NSArray *nowOnDisplayUIContextURLs;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (readonly, copy, nonatomic) NSString *vehicleName;
@property (readonly, copy, nonatomic) NSString *vehicleModelName;
@property (readonly, copy, nonatomic) NSString *vehicleSerialNumber;
@property (readonly, copy, nonatomic) NSString *vehicleManufacturer;
@property (readonly, copy, nonatomic) NSString *vehicleFirmwareVersion;
@property (readonly, copy, nonatomic) NSString *vehicleHardwareVersion;
@property (readonly, nonatomic) BOOL vehicleSupportsDestinationSharing;
@property (readonly, nonatomic) BOOL vehicleSupportsGasoline;
@property (readonly, nonatomic) BOOL vehicleSupportsDiesel;
@property (readonly, nonatomic) BOOL vehicleSupportsElectric;
@property (readonly, nonatomic) BOOL vehicleSupportsCNG;
@property (readonly, copy, nonatomic) NSString *PPID;
@property (readonly, nonatomic) unsigned long long transportType;
@property (readonly, copy, nonatomic) NSArray *screens;
@property (readonly, copy, nonatomic) NSArray *screenIDs;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (readonly, nonatomic) unsigned long long limitableUserInterfaces;
@property (readonly, nonatomic) BOOL nightModeSupported;
@property (readonly, copy, nonatomic) NSString *endpointIdentifier;
@property (readonly, nonatomic) long long voiceTriggerMode;
@property (readonly, nonatomic) long long nowPlayingAlbumArtMode;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } viewAreaInsets;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) BOOL supportsACBack;
@property (readonly, nonatomic) BOOL supportsSiriZLL;
@property (readonly, nonatomic) BOOL supportsSiriZLLButton;
@property (readonly, nonatomic) BOOL supportsSiriMixable;
@property (readonly, nonatomic) NSArray *vehicleButtons;
@property (readonly, nonatomic) NSString *deviceIdentifier;

+ (unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)a0;
+ (id)_descriptionForTransportType:(unsigned long long)a0;
+ (long long)_defaultInterfaceStyleFromAppearanceDefault:(id)a0;
+ (id)descriptionForCapability:(long long)a0;
+ (id)descriptionForUserInterfaceStyle:(long long)a0;
+ (id)descriptionForEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

- (id)valueForUndefinedKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateCarCapabilities;
- (id)descriptionForTransportType;
- (id)descriptionForLimitableUserInterfaces;
- (id)descriptionForVoiceTriggerMode;
- (id)initForCarPlayShell:(BOOL)a0 propertySupplier:(id /* block */)a1;
- (id)screenInfoForScreenID:(id)a0;
- (id)primaryDisplayPhysicalSize;

@end
