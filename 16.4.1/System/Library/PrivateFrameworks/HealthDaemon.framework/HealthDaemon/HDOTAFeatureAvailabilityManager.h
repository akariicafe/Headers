@class HDDaemon, NSString, HKObserverSet, TRIClient, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue, TRINotificationToken;

@interface HDOTAFeatureAvailabilityManager : NSObject <HDHealthDaemonReadyObserver> {
    HDDaemon *_daemon;
    TRIClient *_trialClient;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
    id<TRINotificationToken> _trialToken;
}

@property (copy, nonatomic) NSString *unitTest_factorPath;
@property (retain, nonatomic) NSUserDefaults *unitTest_legacyDisableAndExpiryDefaults;
@property (copy, nonatomic) id /* block */ unitTest_daemonReadyObserverDidFinish;
@property (readonly, copy, nonatomic) NSString *factorPackID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)daemonReady:(id)a0;
- (BOOL)downloadImmediatelyWithError:(id *)a0;
- (void)_unitTest_refreshClientAndNotifyObservers;
- (id)featureAvailabilityInfoForFeature:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (id)disableAndExpiryConditionsDictionaryWithError:(id *)a0;
- (void)downloadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
