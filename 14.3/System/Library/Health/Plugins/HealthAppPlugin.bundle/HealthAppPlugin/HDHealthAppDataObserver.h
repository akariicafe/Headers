@class _HKDelayedOperation, HDHAHealthPluginHostFeedGenerator, NSString, NSMutableSet, NSObject, HDDataManager;
@protocol OS_dispatch_queue;

@interface HDHealthAppDataObserver : NSObject <HDDataObserver>

@property (retain, nonatomic) HDDataManager *dataManager;
@property (retain, nonatomic) NSMutableSet *pendingPluginIdentifiersToRun;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)debounceRunBackgroundGenerationForPluginIdentifiers:(id)a0;
- (void)dealloc;
- (id)initWithDataManager:(id)a0;
- (void)observeForAlertSampleTypes;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)targetPluginIdentifiersForSampleType:(id)a0;
- (void)runBackgroundGenerationWithCurrentPendingPluginIdentifiers;
- (void)start;
- (id)alertSampleTypes;

@end
