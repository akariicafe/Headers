@class AWDWiFiMetricsManagerChipCounters, NSString, AWDWiFiMetricsManagerBTCoexStats, NSData, AWDWiFiMetricsManagerBTCoexModeChange, NSMutableArray;

@interface AWDWiFiMetricsManagerSoftError : PBCodable <NSCopying> {
    struct { unsigned char sample1TimeStamp : 1; unsigned char sample2TimeStamp : 1; unsigned char timestamp : 1; unsigned char batteryChargeLevel : 1; unsigned char channel : 1; unsigned char lastSoftErrorUserFeedbk : 1; unsigned char motionState : 1; unsigned char sample1Cca : 1; unsigned char sample1Rssi : 1; unsigned char sample1Snr : 1; unsigned char sample2Cca : 1; unsigned char sample2Rssi : 1; unsigned char sample2Snr : 1; unsigned char softErrorType : 1; unsigned char inCar : 1; unsigned char lowPowerMode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSoftErrorType;
@property (nonatomic) unsigned int softErrorType;
@property (nonatomic) BOOL hasSample1TimeStamp;
@property (nonatomic) unsigned long long sample1TimeStamp;
@property (nonatomic) BOOL hasSample2TimeStamp;
@property (nonatomic) unsigned long long sample2TimeStamp;
@property (nonatomic) BOOL hasSample1Rssi;
@property (nonatomic) int sample1Rssi;
@property (nonatomic) BOOL hasSample2Rssi;
@property (nonatomic) int sample2Rssi;
@property (nonatomic) BOOL hasSample1Cca;
@property (nonatomic) int sample1Cca;
@property (nonatomic) BOOL hasSample2Cca;
@property (nonatomic) int sample2Cca;
@property (nonatomic) BOOL hasSample1Snr;
@property (nonatomic) int sample1Snr;
@property (nonatomic) BOOL hasSample2Snr;
@property (nonatomic) int sample2Snr;
@property (readonly, nonatomic) BOOL hasAppId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL hasInCar;
@property (nonatomic) BOOL inCar;
@property (nonatomic) BOOL hasMotionState;
@property (nonatomic) unsigned int motionState;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (readonly, nonatomic) BOOL hasApOUI;
@property (retain, nonatomic) NSData *apOUI;
@property (nonatomic) BOOL hasBatteryChargeLevel;
@property (nonatomic) unsigned int batteryChargeLevel;
@property (nonatomic) BOOL hasLowPowerMode;
@property (nonatomic) BOOL lowPowerMode;
@property (readonly, nonatomic) BOOL hasChipCounters;
@property (retain, nonatomic) AWDWiFiMetricsManagerChipCounters *chipCounters;
@property (readonly, nonatomic) BOOL hasBtCoexStats;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexStats *btCoexStats;
@property (readonly, nonatomic) BOOL hasBtCoexModeChange;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexModeChange *btCoexModeChange;
@property (nonatomic) BOOL hasLastSoftErrorUserFeedbk;
@property (nonatomic) unsigned int lastSoftErrorUserFeedbk;
@property (retain, nonatomic) NSMutableArray *chipCountersPerSlices;

+ (Class)chipCountersPerSliceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addChipCountersPerSlice:(id)a0;
- (id)chipCountersPerSliceAtIndex:(unsigned long long)a0;
- (unsigned long long)chipCountersPerSlicesCount;
- (void)clearChipCountersPerSlices;

@end
