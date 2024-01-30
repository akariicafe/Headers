@class NSString;
@protocol HAPSystemKeyCountProvider, HMMLogEventSubmitting;

@interface HMDMetricsDeviceStateManager : HMFObject <HMDMetricsDeviceStateProvider, HMDLogEventDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<HAPSystemKeyCountProvider> keyCountProvider;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long currentDataSyncState;
@property (readonly) unsigned long long currentHomeManagerStatus;
@property (readonly) unsigned long long bitMappedMissingKeys;
@property (readonly) unsigned long long bitMappedDuplicateKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerForNotifications;
- (void).cxx_destruct;
- (unsigned long long)missingKeysBitMapFromKeyCounts:(id)a0;
- (unsigned long long)bitMaskForKeyType:(unsigned long long)a0;
- (unsigned long long)duplicateKeysBitMapFromKeyCounts:(id)a0;
- (void)handleHomeDataLoaded;
- (id)initWithLogEventSubmitter:(id)a0 dailyScheduler:(id)a1;
- (id)initWithLogEventSubmitter:(id)a0 dailyScheduler:(id)a1 keyCountProvider:(id)a2;
- (void)runDailyTask;
- (void)updateCachedPairingKeyStates;
- (void)updateWithDataSyncState:(unsigned long long)a0;
- (void)updateWithHomeManagerStatus:(unsigned long long)a0;

@end
