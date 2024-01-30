@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>

@property (readonly, nonatomic) id<AVTUILogger> logger;

- (id)initWithLogger:(id)a0;
- (void)didReceivePushNotification;
- (void).cxx_destruct;
- (BOOL)importRequired;
- (BOOL)exportRequired;
- (void)importDidCompleteSuccessfully;
- (void)exportDidCompleteSuccessfully;
- (void)didResetSync;
- (void)madeLocalChanges;

@end
