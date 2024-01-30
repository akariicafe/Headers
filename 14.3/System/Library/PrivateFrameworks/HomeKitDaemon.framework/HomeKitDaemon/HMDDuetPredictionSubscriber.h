@class NSObject;
@protocol HMDDuetSuggestionProvider, OS_dispatch_queue, HMDDuetPredictionSubscriberDataSource;

@interface HMDDuetPredictionSubscriber : HMFObject

@property (readonly) id<HMDDuetSuggestionProvider> duetPredictionSuggester;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMDDuetPredictionSubscriberDataSource> dataSource;
@property int duetPredictionsChangedNotificationToken;

- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_unregisterForNotifications;
- (void)_fetchPredictionsFromDuetAndUpdateHomes;
- (id)initWithWorkQueue:(id)a0 dataSource:(id)a1 duetSuggestionProvider:(id)a2;
- (id)initWithWorkQueue:(id)a0 dataSource:(id)a1;

@end
