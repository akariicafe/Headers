@class CUBonjourDevice, NSString, IDSDevice, NSArray, SFDevice, NSDictionary, NSDate;

@interface RPEndpoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) SFDevice *bleDevice;
@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (nonatomic) BOOL cameraCapabilityRequestIsActive;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (copy, nonatomic) NSString *idsCorrelationIdentifier;
@property (copy, nonatomic) NSString *idsDeviceIdentifier;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *mediaRemoteIdentifier;
@property (copy, nonatomic) NSString *mediaRouteIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned char nearbyActionV2Type;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (nonatomic) BOOL present;
@property (copy, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long statusFlags;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *verifiedIdentity;
@property (retain, nonatomic) NSDictionary *verifiedAcl;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, copy, nonatomic) NSDate *activityLevelTimeStamp;
@property (readonly, nonatomic) unsigned char cameraState;
@property (copy, nonatomic) NSArray *homeKitUserIdentifiers;
@property (readonly, nonatomic) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) int proximity;
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo;
@property (readonly, copy, nonatomic) NSString *serviceType;

+ (id)nullEndpoint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)removeIDSDevice;
- (BOOL)removeSFDevice:(id)a0;
- (id)bleTargetData;
- (BOOL)removeBonjourDevice:(id)a0;
- (unsigned int)updateWithBonjourDevice:(id)a0;
- (unsigned int)updateWithFamilyEndpoint:(id)a0;
- (unsigned int)updateWithIDSDevice:(id)a0;
- (unsigned int)updateWithSFDevice:(id)a0;

@end
