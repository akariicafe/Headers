@class NSString, _ATXDataStore, _ATXDuetHelper, NSDate;
@protocol ATXPETEventTracker2Protocol;

@interface ATXCoreDuetLogger : NSObject {
    _ATXDataStore *_dataStore;
    _ATXDuetHelper *_duetHelper;
    NSDate *_currentDate;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSString *_abGroup;
}

- (id)abGroup;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataStore:(id)a0 duetHelper:(id)a1 currentDate:(id)a2 tracker:(id)a3;
- (BOOL)actionTypeIsActivity:(id)a0;
- (void)logDonationCountWithAlogEventCount:(unsigned long long)a0 forIntents:(BOOL)a1;
- (void)logDonationRatioWithDuetEventCount:(unsigned long long)a0 alogEventCount:(unsigned long long)a1 forIntents:(BOOL)a2;
- (void)logCoreDuetActionLogDonationMetrics;
- (void)setabGroup:(id)a0;

@end
