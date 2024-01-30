@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

@interface WBSUnifiedBarAnalyticsRecorder : NSObject

@property (weak, nonatomic) id<WBSUnifiedBarAnalyticsRecorderDelegate> delegate;

- (void)schedulePeriodicReport;
- (void)_reportAnalytics;
- (void).cxx_destruct;

@end
