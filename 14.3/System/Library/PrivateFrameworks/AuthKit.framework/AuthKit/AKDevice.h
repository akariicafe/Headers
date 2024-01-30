@class NSLock, NSString, NSURL, NSData, NSNumber, NSLocale;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    struct __CTServerConnection { } *_telephonyConnectionRef;
    NSLock *_telephonyLock;
    BOOL _shouldUpdateUniqueDeviceIdentifier;
    BOOL _shouldUpdateServerFriendlyDescription;
    BOOL _shouldUpdateColor;
    BOOL _shouldUpdateEnclosureColor;
    BOOL _shouldUpdateCoverGlassColor;
    BOOL _shouldUpdateHousingColor;
    BOOL _shouldUpdateBackingColor;
    BOOL _shouldUpdateLocale;
    BOOL _shouldUpdateROMAddress;
    BOOL _shouldUpdateMLBSerialNumber;
    BOOL _shouldUpdateModelNumber;
}

@property (class, readonly, copy) NSURL *systemContainerURL;
@property (class, readonly, copy) NSURL *systemContainerCacheURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *userChosenName;
@property (readonly) NSString *userFullName;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) BOOL isProtectedWithPasscode;
@property (readonly) BOOL isBiometricAuthCapable;
@property (readonly) BOOL isFaceIDCapable;
@property (readonly) BOOL isUnlocked;
@property (readonly) BOOL isInCircle;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) BOOL isInternalBuild;
@property (readonly) BOOL isMultiUserMode;
@property (readonly) NSData *serializedData;
@property (copy, nonatomic) NSString *serverFriendlyDescription;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSNumber *coverGlassColor;
@property (copy, nonatomic) NSNumber *housingColor;
@property (copy, nonatomic) NSNumber *backingColor;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *MLBSerialNumber;
@property (copy, nonatomic) NSString *ROMAddress;
@property (copy, nonatomic) NSString *modelNumber;
@property (setter=setLinkType:) unsigned long long linkType;
@property (readonly) NSString *localUserUUID;

+ (long long)currentDeviceAuthenticationModeForAuthContext:(id)a0;
+ (id)activeIDSPeerDevice;
+ (id)_generateServerFriendlyDescriptionForPairedDevice:(id)a0;
+ (id)_osVersion;
+ (id)currentDevice;
+ (long long)_currentDeviceAuthenticationMode;
+ (id)deviceSpecificLocalizedStringWithKey:(id)a0;
+ (id)_buildNumber;
+ (id)_hardwareModel;
+ (id)deviceWithSerializedData:(id)a0;
+ (id)_osName;
+ (long long)currentDeviceAuthenticationMode;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_volumeGroupUUID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)_setShouldUpdateToValue:(BOOL)a0;
- (struct __CTServerConnection { } *)_telephonyConnection;
- (void)encodeWithCoder:(id)a0;

@end
