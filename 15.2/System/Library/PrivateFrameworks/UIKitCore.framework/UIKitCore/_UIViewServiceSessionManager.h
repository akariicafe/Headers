@class NSString, NSXPCListener, NSMutableArray;
@protocol _UIViewServiceSessionManagerDelegate;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}

@property (readonly) id<_UIViewServiceSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startViewServiceSessionWithDelegate:(id)a0;
+ (BOOL)hasActiveSessions;
+ (id)__serviceSessionManager;
+ (void)startViewServiceSessionManagerAsPlugin:(BOOL)a0;

- (void)_startListenerWithName:(id)a0;
- (id)_initWithDelegate:(id)a0;
- (void)_registerSessionForDefaultDeputies:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_startListener;
- (id)_initAsPlugIn:(BOOL)a0;
- (void).cxx_destruct;
- (void)_startOrStopSystemsForBackgroundRunning;
- (id)init;
- (void)_configureSessionForConnection:(id)a0;
- (void)dealloc;
- (BOOL)_hasActiveSessions;

@end
