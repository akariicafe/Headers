@class NSUUID, NSData, NSArray, NSDate, IDSEndpointCapabilities, NSString, IDSDestination, _IDSDevice;

@interface IDSDevice : NSObject {
    _IDSDevice *_internal;
}

@property (readonly, nonatomic) NSArray *linkedUserURIs;
@property (retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property (readonly, nonatomic) BOOL supportsApplePay;
@property (readonly, nonatomic) BOOL supportsTethering;
@property (readonly, nonatomic) BOOL supportsHandoff;
@property (readonly, nonatomic) BOOL supportsiCloudPairing;
@property (readonly, nonatomic) BOOL supportsSMSRelay;
@property (readonly, nonatomic) BOOL supportsMMSRelay;
@property (readonly, nonatomic) BOOL supportsPhoneCalls;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property (readonly, nonatomic) BOOL isCloudConnected;
@property (readonly, nonatomic) IDSEndpointCapabilities *capabilities;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *uniqueIDOverride;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; } operatingSystemVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) BOOL isHSATrusted;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) long long relationship;
@property (readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property (readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property (readonly, nonatomic, getter=isNearby) BOOL nearby;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) IDSDestination *destination;
@property (readonly, nonatomic) BOOL locallyPresent;

- (id)_initWithDictionary:(id)a0;
- (id)fullDescription;
- (void)dealloc;
- (id)compactDescription;
- (void)_setAccount:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)_internal;
- (void).cxx_destruct;
- (void)_addIdentity:(id)a0;
- (void)_setService:(id)a0;

@end
