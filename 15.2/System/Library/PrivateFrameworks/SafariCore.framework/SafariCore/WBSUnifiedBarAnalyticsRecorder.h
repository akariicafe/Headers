@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

@interface WBSUnifiedBarAnalyticsRecorder : NSObject

@property (weak, nonatomic) id<WBSUnifiedBarAnalyticsRecorderDelegate> delegate;

- (void).cxx_destruct;
- (void)_reportAnalytics;
- (void)schedulePeriodicReport;

@end
