@class _HKDelayedOperation, HDHAHealthPluginHostFeedGenerator, HDProfile, NSMutableSet, NSString, NSObject, HDDataManager;
@protocol OS_dispatch_queue;

@interface HDHealthAppDataObserver : NSObject <HDDataObserver>

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataManager *dataManager;
@property (retain, nonatomic) NSMutableSet *pendingPluginIdentifiersToRun;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)initWithProfile:(id)a0;
- (void)observeForAlertSampleTypes;
- (id)targetPluginIdentifiersForSampleType:(id)a0;
- (void)start;
- (void)debounceRunBackgroundGenerationForPluginIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)alertSampleTypes;
- (void)dealloc;
- (void)runBackgroundGenerationWithCurrentPendingPluginIdentifiers;
- (id)initWithProfile:(id)a0 debounceTime:(double)a1;

@end
