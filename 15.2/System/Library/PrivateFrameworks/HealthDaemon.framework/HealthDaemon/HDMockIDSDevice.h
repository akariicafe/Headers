@class NSUUID, NSString, NSArray;

@interface HDMockIDSDevice : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *nanoRegistryPairingID;
@property (retain, nonatomic) NSUUID *nsuuid;
@property (copy, nonatomic) NSString *uniqueIDOverride;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *productBuildVersion;
@property (copy, nonatomic) NSString *buildType;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSArray *identities;
@property (readonly, nonatomic) long long relationship;
@property (copy, nonatomic) NSString *electrocardiogramVersion;
@property (copy, nonatomic) NSString *backgroundAtrialFibrillationVersion;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL supportsCinnamonHW;
@property (nonatomic) BOOL supportsCinnamonAntimonyGloryF;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hd_deviceIdentifier;
- (id)hd_destinationIdentifier;
- (BOOL)hd_isEquivalentToDevice:(id)a0;
- (id)hd_shortDescription;

@end
