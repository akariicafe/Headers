@class NSString, NSSet, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *_hashingKey;
@property (retain) NSSet *capabilities;
@property (retain) NSString *address;
@property (retain) NSString *build;
@property (retain) NSString *color;
@property (retain) NSString *deviceClass;
@property (retain) NSString *enclosureColor;
@property (retain) NSString *identifier;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *productType;
@property (retain) NSString *platform;
@property (retain, nonatomic) NSSet *bugSessions;
@property long long status;
@property long long transport;
@property long long remoteTransport;
@property (retain) SFDevice *sfDevice;
@property (readonly, nonatomic) BOOL isRemote;
@property (retain) NSString *hardwareCodename;
@property (retain) NSString *serialNumber;
@property long long homeButtonType;
@property (retain) NSString *uniformTypeIdentifier;
@property (retain) NSString *idsIdentifier;
@property (retain) NSString *companionDeviceIdentifier;
@property (retain) NSString *homeTheaterSystemName;
@property (retain) NSString *homeTheaterSystemIdentifier;
@property (retain) NSString *mediaSystemName;
@property long long mediaSystemRole;
@property (retain) NSString *mediaSystemIdentifier;
@property (retain) NSString *mediaRemoteIdentifier;
@property (retain) NSString *homeKitIdentifier;
@property BOOL isHomeKitResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceWithDictionary:(id)a0;
+ (id)deviceForSFDevice:(id)a0 systemInfo:(id)a1 andStatus:(long long)a2;
+ (id)currentDevice;
+ (id)idsDeviceWithDevice:(id)a0 address:(id)a1;
+ (id)_currentDeviceId;
+ (id)currentDeviceWithDaemonInfo;
+ (id)deviceForSFDevice:(id)a0 andStatus:(long long)a1;
+ (id)nilSafeDevice;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)a0;
- (id)publicLogDescription;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (BOOL)hasCapabilities:(id)a0;
- (id)hashingKey;
- (BOOL)isLikeDevice:(id)a0;
- (id)imageData;
- (id)initWithCoder:(id)a0;
- (BOOL)isCurrentDevice;
- (BOOL)isTemporaryDevice;
- (BOOL)isMoreCompleteThan:(id)a0;
- (id)shortDescription;
- (BOOL)isEqualToDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)hashingKeyForTempDevice;
- (id)imageURLForDeviceClass:(id)a0 deviceModel:(id)a1 deviceColor:(id)a2 size:(long long)a3 variant:(long long)a4 scale:(float)a5;
- (id)serialize;
- (id)imageURLForScale:(float)a0;
- (void).cxx_destruct;

@end
