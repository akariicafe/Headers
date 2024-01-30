@class NSString, NSNumber;

@interface BRRTCMigrationMetricDeviceDetails : NSObject

@property (retain, nonatomic) NSString *gizmoBuild;
@property (retain, nonatomic) NSString *gizmoHardware;
@property (retain, nonatomic) NSString *gizmoBuildType;
@property (retain, nonatomic) NSNumber *pairedDeviceCount;
@property (retain, nonatomic) NSNumber *gizmoMaxPairingVersion;
@property (retain, nonatomic) NSNumber *gizmoEnclosureMaterial;
@property (retain, nonatomic) NSNumber *switchCounter;

- (void).cxx_destruct;
- (id)dictionaryOfMetricKeysWithRecordedValues;

@end
