@class NSUUID, NSDate;

@interface PowerUIAccessoryStatus : NSObject

@property unsigned long long currentState;
@property BOOL enabled;
@property (retain) NSDate *disabledUntilDate;
@property BOOL temporarilyDisabled;
@property (retain) NSDate *lastSentDate;
@property (retain) NSDate *lastSeenDate;
@property (retain) NSDate *lastTimeseriesDate;
@property (retain) NSDate *lastUnderchargeRecordedForPrediction;
@property (retain) NSUUID *expectedHash;
@property unsigned short minutesSavedSinceLastReport;
@property unsigned char underchargesSinceLastReport;
@property unsigned char chargingEventsSinceLastReport;
@property unsigned long long managerState;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
