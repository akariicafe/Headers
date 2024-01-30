@class NSString, NSMutableDictionary, SBIdleTimerAggregateClientConfiguration, NSMutableArray;
@protocol SBIdleTimerServiceDelegate, BSInvalidatable;

@interface SBIdleTimerService : NSObject <ITIdleTimerStateServiceDelegate, SBIdleTimerIdleEventHandler> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSMutableArray *_access_idleExpirationHandlers;
    NSMutableArray *_access_idleWarnHandlers;
    NSMutableArray *_access_idleUserAttentionResetHandlers;
    NSMutableDictionary *_disableTimerConfigurations;
    NSMutableDictionary *_minExpirationConfigurations;
    NSMutableDictionary *_maxEpirationConfigurations;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (weak, nonatomic) id<SBIdleTimerServiceDelegate> delegate;
@property (readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedIdleTimerStateServiceCreatingIfNeeded:(BOOL)a0;
+ (id)_sharedIdleTimerStateServiceIfExists;
+ (void)registerServices;

- (void)_addStateCaptureHandlers;
- (id)acquireIdleTimerAssertionWithConfiguration:(id)a0 fromClient:(id)a1 forReason:(id)a2;
- (BOOL)handleIdleTimerDidExpire;
- (id)_stateCaptureDescription;
- (id)_init;
- (void)dealloc;
- (BOOL)handleIdleTimerDidWarn;
- (void)_removeConfigurationInfoForReason:(id)a0 fromArray:(id)a1;
- (id)_acquireIdleTimerDisableAssertionForReason:(id)a0;
- (void)_addConfigurationInfo:(id)a0 toSortedArray:(id)a1;
- (void)_aggregateConfigurations;
- (void)_removeAssertionsForReason:(id)a0;
- (BOOL)handleIdleTimerUserAttentionDidReset;
- (void).cxx_destruct;

@end
