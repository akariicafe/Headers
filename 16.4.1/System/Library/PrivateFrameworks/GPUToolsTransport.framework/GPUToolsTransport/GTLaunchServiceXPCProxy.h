@class NSSet;
@protocol GTXPCConnection;

@interface GTLaunchServiceXPCProxy : NSObject <GTLaunchService> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)bringGuestAppToForeground:(int)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)launchReplayerWithConfiguration:(id)a0;
- (void)resumeTaskForPid:(int)a0;
- (void)symbolicatorSignatureForPid:(int)a0 completionHandler:(id /* block */)a1;

@end
