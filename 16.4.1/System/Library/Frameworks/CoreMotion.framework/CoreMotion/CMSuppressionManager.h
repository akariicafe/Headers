@class NSString;

@interface CMSuppressionManager : NSObject <DPCWatchPresenceDelegate> {
    id _internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;

- (void)connect;
- (void)startService;
- (void)onNotification:(id)a0;
- (id)initPrivate;
- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (void)didDetectSignificantUserInteraction;
- (struct CMSuppressionEventStruct { double x0; long long x1; unsigned long long x2; })currentSuppressionEvent;
- (void)feedDevicePresenceEvent:(long long)a0 timestamp:(double)a1 force:(BOOL)a2;
- (void)feedSmartPowerNapEvent:(long long)a0 timestamp:(double)a1 force:(BOOL)a2;
- (void)feedViewObstructedEvent:(long long)a0 timestamp:(double)a1 force:(BOOL)a2;
- (void)handleSmartPowerNapState:(unsigned char)a0;
- (void)managerDidDetectEvent:(unsigned long long)a0;
- (void)managerDidFindError:(unsigned long long)a0;
- (void)onEclipseData:(const struct Suppress { double x0; BOOL x1; } *)a0;
- (void)onViewObstructedStateData:(const struct ViewObstructedState { double x0; struct ViewObstructedState { unsigned char x0; struct Suppress { unsigned char x0; BOOL x1; BOOL x2; unsigned char x3; unsigned char x4; unsigned char x5; float x6; float x7; } x1; float x2[4]; } x1; } *)a0;
- (void)sendServiceRequestPrivate;
- (void)sendSuppressionEventToClientPrivate;
- (void)sendViewObstructedRequestPrivate;
- (void)sendViewObstructedStateToClientPrivate;
- (void)simulateSignificantUserInteraction;
- (void)startSuppressionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startSuppressionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startViewObstructedStateUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startViewObstructedStateUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopService;
- (void)stopSuppressionUpdates;
- (void)stopSuppressionUpdatesPrivate;
- (void)stopViewObstructedStateUpdates;
- (void)stopViewObstructedStateUpdatesPrivate;
- (void)updateCurrentSuppressionEvent:(long long)a0 timestamp:(double)a1 reason:(unsigned long long)a2;
- (void)updateSuppressionStateAndSendToClient;
- (id)viewObstructedBlocking;

@end
