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

+ (id)entityName;
+ (id)fetchRequest;

@end
