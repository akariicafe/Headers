@class NSString, NSXPCListener, NSMutableArray;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startViewServiceSessionManagerAsPlugin:(BOOL)a0;
+ (BOOL)hasActiveSessions;
+ (id)__serviceSessionManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startListener;
- (void)_startListenerWithName:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_registerSessionForDefaultDeputies:(id)a0;
- (BOOL)_hasActiveSessions;
- (id)_initAsPlugIn:(BOOL)a0;
- (void)_startOrStopSystemsForBackgroundRunning;
- (void)_configureSessionForConnection:(id)a0;

@end
