@class NSObject, NSString, MTTimerStorage, BSServiceConnection, MTSessionsManager;
@protocol BSServiceConnectionClient, NAScheduler, OS_dispatch_queue;

@interface MTTimerSessionsCoordinator : NSObject <MTTimerObserver, ClockAngelClient, MTSource>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTSessionsManager *sessionsManager;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSessions;

- (void)source:(id)a0 didFireTimer:(id)a1;
- (void)handleSystemReady;
- (id)setupInterface;
- (void)stopTimer;
- (void)resendTimerDataEntry;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)pauseTimer;
- (id)currentTimer;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (id)server;
- (void)buildConnection;
- (void)dealloc;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (id)initWithStorage:(id)a0;
- (void)resumeTimer;
- (void)processTimerUpdate:(id)a0;
- (void)nextTimerDidChange:(id)a0;
- (id)normalizedTimeString:(double)a0 state:(unsigned long long)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (id)sourceIdentifier;
- (void)updateTimerWithState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
