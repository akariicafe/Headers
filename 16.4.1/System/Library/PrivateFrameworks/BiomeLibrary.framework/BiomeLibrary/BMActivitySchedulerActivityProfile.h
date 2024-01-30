@class NSString, NSDate;

@interface BMActivitySchedulerActivityProfile : BMEventBase <BMStoreData> {
    BOOL _hasRaw_endTime;
    double _raw_endTime;
    BOOL _hasRaw_startTime;
    double _raw_startTime;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *activityname;
@property (readonly, nonatomic) BOOL completed;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) int CPUAwakeTime;
@property (nonatomic) BOOL hasCPUAwakeTime;
@property (readonly, nonatomic) double CPUTime;
@property (nonatomic) BOOL hasCPUTime;
@property (readonly, nonatomic) int endBatteryTemperature;
@property (nonatomic) BOOL hasEndBatteryTemperature;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) BOOL endedInIdle;
@property (nonatomic) BOOL hasEndedInIdle;
@property (readonly, nonatomic) BOOL endedOnBattery;
@property (nonatomic) BOOL hasEndedOnBattery;
@property (readonly, nonatomic) BOOL networkProfSuccess;
@property (nonatomic) BOOL hasNetworkProfSuccess;
@property (readonly, nonatomic) double qosBackground;
@property (nonatomic) BOOL hasQosBackground;
@property (readonly, nonatomic) double qosLegacy;
@property (nonatomic) BOOL hasQosLegacy;
@property (readonly, nonatomic) double qosUserInit;
@property (nonatomic) BOOL hasQosUserInit;
@property (readonly, nonatomic) double runTime;
@property (nonatomic) BOOL hasRunTime;
@property (readonly, nonatomic) BOOL rusageProfSuccess;
@property (nonatomic) BOOL hasRusageProfSuccess;
@property (readonly, nonatomic) int servicedEnergy;
@property (nonatomic) BOOL hasServicedEnergy;
@property (readonly, nonatomic) BOOL sessionProfSuccess;
@property (nonatomic) BOOL hasSessionProfSuccess;
@property (readonly, nonatomic) int startBatteryTemperature;
@property (nonatomic) BOOL hasStartBatteryTemperature;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) BOOL startedInIdle;
@property (nonatomic) BOOL hasStartedInIdle;
@property (readonly, nonatomic) BOOL startedOnBattery;
@property (nonatomic) BOOL hasStartedOnBattery;
@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) int wifiDown;
@property (nonatomic) BOOL hasWifiDown;
@property (readonly, nonatomic) int wifiUp;
@property (nonatomic) BOOL hasWifiUp;
@property (readonly, nonatomic) int dirtyMemoryDelta;
@property (nonatomic) BOOL hasDirtyMemoryDelta;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 activityname:(id)a1 completed:(id)a2 CPUAwakeTime:(id)a3 CPUTime:(id)a4 endBatteryTemperature:(id)a5 endTime:(id)a6 endedInIdle:(id)a7 endedOnBattery:(id)a8 networkProfSuccess:(id)a9 qosBackground:(id)a10 qosLegacy:(id)a11 qosUserInit:(id)a12 runTime:(id)a13 rusageProfSuccess:(id)a14 servicedEnergy:(id)a15 sessionProfSuccess:(id)a16 startBatteryTemperature:(id)a17 startTime:(id)a18 startedInIdle:(id)a19 startedOnBattery:(id)a20 version:(id)a21 wifiDown:(id)a22 wifiUp:(id)a23 dirtyMemoryDelta:(id)a24;

@end
