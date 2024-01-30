@class NSString, SCLScheduleSettings, SCLState, SCLSchoolModeXPCClient, SCLSchoolModeConfiguration;

@interface SCLSchoolMode : NSObject <SCLSchoolModeXPCClientDelegate> {
    SCLSchoolModeXPCClient *_xpcClient;
    SCLSchoolModeConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property unsigned long long resumeState;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic) SCLState *state;
@property (readonly, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dumpState;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (void)resume;
- (void)dealloc;
- (void)setActive:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)a0;
- (void)addUnlockHistoryItem:(id)a0 completion:(id /* block */)a1;
- (void)deleteHistoryWithCompletion:(id /* block */)a0;
- (void)noteSignificantUserInteraction;
- (void)triggerRemoteSync;
- (void)client:(id)a0 didUpdateToState:(id)a1 fromState:(id)a2;
- (void)client:(id)a0 didLoadScheduleSettings:(id)a1;
- (void)client:(id)a0 didUpdateScheduleSettings:(id)a1;
- (void)clientDidChangeUnlockHistory:(id)a0;
- (void)applyScheduleSettings:(id)a0 completion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 pairingID:(id)a1 delegate:(id)a2;
- (void)_assertQueueIfReady;

@end
