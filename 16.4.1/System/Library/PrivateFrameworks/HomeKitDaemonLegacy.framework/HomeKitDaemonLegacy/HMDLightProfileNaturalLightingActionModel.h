@class NSNumber, NSUUID, NSSet;

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel

@property (retain) NSNumber *naturalLightingEnabledField;
@property (retain) NSUUID *lightProfileUUID;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (retain) NSUUID *accessoryUUID;
@property (retain) NSSet *serviceUUIDs;

+ (id)properties;

- (id)dependentUUIDs;

@end
