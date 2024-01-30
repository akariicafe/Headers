@class NSDate, BSSMO, NSObject;

@interface RoamMO : NSManagedObject

@property (nonatomic) short cacheChannel;
@property (nonatomic) short cacheRssiBin;
@property (retain, nonatomic) NSObject *channelsScanned;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) int fwReason;
@property (nonatomic) int fwSubReason;
@property (retain, nonatomic) NSObject *histBcnPer;
@property (retain, nonatomic) NSObject *histBcnSched;
@property (retain, nonatomic) NSObject *histCca;
@property (retain, nonatomic) NSObject *histFwTxFrames;
@property (retain, nonatomic) NSObject *histFwTxPer;
@property (retain, nonatomic) NSObject *histFwTxRetrans;
@property (retain, nonatomic) NSObject *histRssi;
@property (retain, nonatomic) NSObject *histRxFrames;
@property (retain, nonatomic) NSObject *histSnr;
@property (retain, nonatomic) NSObject *histTxFrames;
@property (retain, nonatomic) NSObject *histTxPer;
@property (retain, nonatomic) NSObject *histTxRetrans;
@property (nonatomic) int hostReason;
@property (nonatomic) BOOL isLateRoam;
@property (nonatomic) BOOL isPingPong;
@property (nonatomic) short motionState;
@property (retain, nonatomic) NSObject *neighborCache;
@property (nonatomic) short roamDelta;
@property (nonatomic) double roamLatencyMs;
@property (nonatomic) short sourceCca;
@property (nonatomic) short sourceRssi;
@property (nonatomic) int sourceScanLatencyMs;
@property (nonatomic) short sourceSnr;
@property (nonatomic) long long sourceTimeSpentSecs;
@property (nonatomic) int status;
@property (nonatomic) short targetCca;
@property (nonatomic) BOOL targetDhcpFailed;
@property (nonatomic) int targetDhcpLatencyMs;
@property (nonatomic) int targetDhcpLeaseMins;
@property (nonatomic) short targetRssi;
@property (nonatomic) short targetSnr;
@property (nonatomic) BOOL userInteractive;
@property (nonatomic) BOOL voipActive;
@property (retain, nonatomic) BSSMO *source;
@property (retain, nonatomic) BSSMO *target;

+ (unsigned long long)dwellTimeInBand:(id)a0 bandIs24:(BOOL)a1 bssid:(id)a2 maxAgeInDays:(unsigned long long)a3 moc:(id)a4;
+ (id)entityName;
+ (id)fetchRequest;
+ (unsigned long long)roamsCount:(id)a0 fetchLimit:(unsigned long long)a1 moc:(id)a2;
+ (id)generateInstance:(id)a0;
+ (id)fetchRoamProperties:(id)a0 lookForRoamStatus:(BOOL)a1 fetchLimit:(unsigned long long)a2 properties:(id)a3 moc:(id)a4;
+ (id)fetchRoamCache:(id)a0 fetchLimit:(unsigned long long)a1 moc:(id)a2;
+ (unsigned long long)roamsCountBetweenBssids:(id)a0 target:(id)a1 moc:(id)a2;
+ (id)fetchRoamObjects:(id)a0 fetchLimit:(unsigned long long)a1 moc:(id)a2;

@end
