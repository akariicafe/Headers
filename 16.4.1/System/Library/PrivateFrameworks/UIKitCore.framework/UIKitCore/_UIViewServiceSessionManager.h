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

+ (id)__serviceSessionManager;
+ (void)startViewServiceSessionWithDelegate:(id)a0;
+ (BOOL)hasActiveSessions;
+ (void)startViewServiceSessionManagerAsPlugin:(BOOL)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_initAsPlugIn:(BOOL)a0;
- (void)_startListener;
- (id)_initWithDelegate:(id)a0;
- (void)_startListenerWithName:(id)a0;
- (void)dealloc;
- (void)_configureSessionForConnection:(id)a0;
- (id)init;
- (void)_startOrStopSystemsForBackgroundRunning;
- (void)_registerSessionForDefaultDeputies:(id)a0;
- (void).cxx_destruct;
- (BOOL)_hasActiveSessions;

@end
