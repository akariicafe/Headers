@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>

@property (readonly, nonatomic) id<AVTUILogger> logger;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (BOOL)importRequired;
- (BOOL)exportRequired;
- (void)importDidCompleteSuccessfully;
- (void)exportDidCompleteSuccessfully;
- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)madeLocalChanges;

@end
