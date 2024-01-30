@class NSString;
@protocol HMMLogEventSubmitting;

@interface HMDCurrentAccessorySetupMetricDispatcher : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _submitted;
    id /* block */ _currentUpTicksFactory;
    id<HMMLogEventSubmitting> _logEventSubmitter;
}

@property (readonly) unsigned long long setupSessionStartTime;
@property (readonly) unsigned long long setupSessionEndTime;
@property (readonly) unsigned long long pairingIdentityCreationTime;
@property (readonly) unsigned long long settingsCreationTime;
@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly) unsigned long long siriReadyTime;
@property (readonly) BOOL submitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)markCurrentAccessoryAddComplete;
- (id)initWithSetupSessionStartTime:(unsigned long long)a0 setupSessionEndTime:(unsigned long long)a1 logEventSubmitter:(id)a2;
- (id)initWithSetupSessionStartTime:(unsigned long long)a0 setupSessionEndTime:(unsigned long long)a1 logEventSubmitter:(id)a2 currentUpTicksFactory:(id /* block */)a3;
- (void)markPairingIdentityCreated;
- (void)markSettingsCreated;
- (void)markSiriReady;

@end
