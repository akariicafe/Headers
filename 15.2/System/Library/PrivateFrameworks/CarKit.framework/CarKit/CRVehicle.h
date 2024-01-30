@class NSUUID, NSString, NSData, NSSet, NSDate;

@interface CRVehicle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *certificateSerialNumber;
@property (retain, nonatomic) NSString *vehicleName;
@property (nonatomic) unsigned long long pairingStatus;
@property (retain, nonatomic) NSString *bluetoothAddress;
@property (retain, nonatomic) NSString *carplayWiFiUUID;
@property (retain, nonatomic) NSSet *accessoryProtocols;
@property (retain, nonatomic) NSDate *lastConnectedDate;
@property (retain, nonatomic) NSString *vehicleModelName;
@property (retain, nonatomic) NSString *PPID;
@property (retain, nonatomic) NSString *internalNotes;
@property (nonatomic) BOOL supportsEnhancedIntegration;
@property (nonatomic) unsigned long long enhancedIntegrationStatus;
@property (nonatomic) BOOL supportsStartSessionRequest;
@property (nonatomic) BOOL supportsUSBCarPlay;
@property (nonatomic) BOOL supportsWirelessCarPlay;
@property (nonatomic) long long albumArtUserPreference;
@property (retain, nonatomic) NSString *wallpaperIdentifier;
@property (retain, nonatomic) NSString *previousWallpaperIdentifier;
@property (nonatomic) long long appearanceModePreference;
@property (nonatomic) long long mapsAppearancePreference;
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) BOOL isEnhancedIntegrationEnabled;

+ (id)vehicleForVehicleAccessory:(id)a0;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 certificateSerial:(id)a1;
- (id)_pairingDebugDescription;
- (id)_enhancedIntegrationDebugDescription;
- (void)mergeAttributesFromVehicle:(id)a0;

@end
