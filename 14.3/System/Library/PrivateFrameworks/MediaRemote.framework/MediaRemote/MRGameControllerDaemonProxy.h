@class NSString, MRGameControllerDelayedEvents, NSXPCConnection;
@protocol GameControllerDaemon;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener> {
    NSXPCConnection *_connection;
    id<GameControllerDaemon> _remote;
    MRGameControllerDelayedEvents *_delayedEvents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultGameControllerDaemonProxy;

- (void).cxx_destruct;
- (void)addController:(id)a0;
- (void)removeController:(id)a0;
- (void)controllerWithUDID:(unsigned long long)a0 setData:(id)a1;
- (void)controllerWithUDID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2;
- (void)microControllerWithDigitizerX:(float)a0 withY:(float)a1 withTimeStamp:(unsigned long long)a2 touchDown:(BOOL)a3;
- (void)replyConnectedHosts:(id)a0;
- (void)microControllerWithUDID:(unsigned long long)a0 setDigitizerX:(float)a1 digitizerY:(float)a2 withTimeStamp:(unsigned long long)a3 touchDown:(BOOL)a4;
- (BOOL)_delayEvent:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2 withUpDelay:(double)a3;
- (void)controllerID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2;
- (id)addEmulatedControllerWithProperties:(id)a0;
- (void)removeEmulatedController:(id)a0;
- (void)controllerID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2 withUpDelay:(double)a3;
- (void)controllerID:(unsigned long long)a0 setDigitizerX:(float)a1 digitizerY:(float)a2 withTimeStamp:(unsigned long long)a3 touchDown:(BOOL)a4;
- (void)controllerID:(unsigned long long)a0 setArrayValueX:(float)a1 y:(float)a2 z:(float)a3 w:(float)a4 forElement:(int)a5;
- (void)_openConnection;

@end
