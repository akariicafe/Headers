@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CLIndoorXPCProvider : NSObject {
    NSObject<OS_dispatch_queue> *_frameworkQueue;
    NSXPCConnection *_connection;
    struct optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > { BOOL m_initialized; struct aligned_storage<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } _lastReconnectTime;
    NSObject<OS_dispatch_source> *_interruptReconnection;
}

+ (id)newConnectionFor:(id)a0;

- (id)impl;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)withinQueueReinitializeRemoteState;
- (id).cxx_construct;
- (void)invalidate;
- (void)withinQueueInitializeConnection;
- (void)withinQueueInvalidate;
- (void)withinQueueHandleReconnect:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x0; } x0; })a0;
- (int)withinQueueShouldReinitializeRemote:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x0; } x0; })a0;
- (void)withinQueueScheduleReconnect:(struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x0; })a0 reason:(id)a1;
- (id /* block */)_defaultErrHandler:(id /* block */)a0 forCaller:(id)a1;
- (void)withinQueueInterruptionHandler;
- (id /* block */)_defaultErrHandlerForCaller:(id)a0;

@end
