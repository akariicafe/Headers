@class NSString;

@interface SFHeadphoneProduct : NSObject

@property (class, readonly, nonatomic) SFHeadphoneProduct *airPods;
@property (class, readonly, nonatomic) SFHeadphoneProduct *airPodsSecondGeneration;
@property (class, readonly, nonatomic) SFHeadphoneProduct *airPodsPro;
@property (class, readonly, nonatomic) SFHeadphoneProduct *airPodsMax;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsSolo;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsSoloPro;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsStudio;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsX;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsFlex;
@property (class, readonly, nonatomic) SFHeadphoneProduct *powerBeats3;
@property (class, readonly, nonatomic) SFHeadphoneProduct *powerBeats4;
@property (class, readonly, nonatomic) SFHeadphoneProduct *powerBeatsPro;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b507;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b688;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b494;

@property (nonatomic) unsigned int productID;
@property (nonatomic) unsigned long long model;
@property (copy, nonatomic) NSString *bluetoothModel;
@property (nonatomic) BOOL supportsMobileAsset;
@property (nonatomic) BOOL supportsRepair;
@property (nonatomic) BOOL supportsSiri;
@property (nonatomic) BOOL supportsSpatialAudio;
@property (nonatomic) BOOL supportsOptimizedBatteryCharging;
@property (nonatomic) BOOL supportsWirelessSplitterInEar;
@property (nonatomic) BOOL showsStatus;
@property (nonatomic) BOOL showsStatusOutOfCase;
@property (nonatomic) BOOL hasW1Chip;
@property (nonatomic) BOOL hasLid;
@property (nonatomic) BOOL hasSplitBattery;
@property (nonatomic) unsigned long long buttonLocation;
@property (nonatomic) BOOL usesProductCaseName;
@property (nonatomic) BOOL hasSplitCaseColors;
@property (nonatomic) BOOL isAirPods;

- (void).cxx_destruct;
- (id)initWithProductID:(unsigned int)a0;
- (id)initWithModel:(unsigned long long)a0;
- (id)initWithBluetoothModel:(id)a0;
- (id)initWithProductID:(unsigned int)a0 supportsMobileAsset:(BOOL)a1;

@end
