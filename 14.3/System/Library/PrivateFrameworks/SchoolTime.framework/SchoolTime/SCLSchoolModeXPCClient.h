@class NSString, NSXPCConnection, SCLScheduleSettings, SCLSchoolModeConfiguration, SCLState, SCLSchoolModeServerSettings;
@protocol SCLSchoolModeXPCClientDelegate;

@interface SCLSchoolModeXPCClient : NSObject <SCLSchoolModeXPCClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    SCLSchoolModeServerSettings *_serverSettings;
}

@property (weak, nonatomic) id<SCLSchoolModeXPCClientDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) SCLSchoolModeConfiguration *configuration;
@property (readonly, nonatomic) SCLState *state;
@property (readonly, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)_reconnect;
- (void)dumpState;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)resume;
- (void)invalidate;
- (oneway void)applyServerSettings:(id)a0;
- (void)setActive:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)a0;
- (void)addUnlockHistoryItem:(id)a0 completion:(id /* block */)a1;
- (void)deleteHistoryWithCompletion:(id /* block */)a0;
- (void)noteSignificantUserInteraction;
- (void)triggerRemoteSync;
- (oneway void)didChangeUnlockHistory;
- (void)applyScheduleSettings:(id)a0 completion:(id /* block */)a1;

@end
