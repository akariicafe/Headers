@class CUBonjourDevice, NSString, IDSDevice, NSArray, SFDevice, NSDictionary;

@interface RPEndpoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) SFDevice *bleDevice;
@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (copy, nonatomic) NSString *idsDeviceIdentifier;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *mediaRemoteIdentifier;
@property (copy, nonatomic) NSString *mediaRouteIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL present;
@property (copy, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long statusFlags;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSArray *homeKitUserIdentifiers;
@property (readonly, nonatomic) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int proximity;
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo;
@property (readonly, copy, nonatomic) NSString *serviceType;

+ (id)nullEndpoint;

- (BOOL)removeBonjourDevice:(id)a0;
- (unsigned int)updateWithBonjourDevice:(id)a0;
- (unsigned int)updateWithSFDevice:(id)a0;
- (BOOL)removeSFDevice:(id)a0;
- (unsigned int)removeIDSDevice;
- (unsigned int)updateWithIDSDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
