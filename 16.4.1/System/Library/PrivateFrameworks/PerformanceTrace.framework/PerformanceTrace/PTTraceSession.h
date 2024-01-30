@class PTTraceConfig, NSXPCConnection;
@protocol PTTraceSessionDelegate;

@interface PTTraceSession : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) PTTraceConfig *config;
@property (retain, nonatomic) id<PTTraceSessionDelegate> delegate;
@property (readonly, nonatomic) BOOL isValid;

+ (id)initWithConfig:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_getRemoteObjectProxy;
- (void)_invalidateSession;
- (void)_initConnection;
- (void)_didPingService:(id)a0;
- (void)_ping:(id)a0;
- (void)performanceTraceDidComplete:(id)a0 withToken:(id)a1 withError:(id)a2;
- (void)performanceTraceDidStart:(id)a0;
- (void)performanceTraceDidStop:(id)a0;
- (void)startPerformanceTrace;
- (void)stopPerformanceTrace;

@end
