@class HKObserverSet, NSString, HDProfile, HKMobileCountryCodeManager, NSDate, NSUserDefaults;
@protocol _HDPeriodicCountryMonitorNanoSyncManagerProviding;

@interface HDPeriodicCountryMonitor : NSObject <HDDiagnosticObject, HDNanoSyncManagerObserver> {
    HDProfile *_profile;
    id<_HDPeriodicCountryMonitorNanoSyncManagerProviding> _nanoSyncManager;
    id /* block */ _mobileCountryCodeManagerProvider;
    HKObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
}

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (readonly, copy, nonatomic) NSDate *lastCheckAttemptDate;
@property (readonly, copy, nonatomic) NSString *lastFetchAttemptBuild;
@property (readonly, copy, nonatomic) NSDate *lastFetchAttemptDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)_recordSuccessfulFetchForCurrentPairedBuilds;
- (id)initWithProfile:(id)a0 nanoSyncManager:(id)a1;
- (id)initWithProfile:(id)a0 nanoSyncManager:(id)a1 mobileCountryCodeManagerProvider:(id /* block */)a2 userDefaults:(id)a3;

@end
