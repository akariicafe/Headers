@class NSObject;
@protocol OS_dispatch_queue, ATXUpdatePredictionsDelegate;

@interface ATXAppClipSettingsUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)registerSiriSettingsChangedNotificationHandler;
- (void)handleSiriSettingsChangedNotification;

@end
