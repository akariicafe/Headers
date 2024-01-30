@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CLIndoorXPCProvider : NSObject {
    NSObject<OS_dispatch_queue> *_frameworkQueue;
    NSXPCConnection *_connection;
    struct optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> { BOOL m_initialized; struct aligned_storage<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } _lastReconnectTime;
    NSObject<OS_dispatch_source> *_interruptReconnection;
}

+ (id)newConnectionFor:(id)a0;

- (id)impl;
- (void)withinQueueReinitializeRemoteState;
- (id)initWithConnection:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id).cxx_construct;
- (void)withinQueueInitializeConnection;
- (void)withinQueueInvalidate;
- (void)withinQueueHandleReconnect:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0;
- (int)withinQueueShouldReinitializeRemote:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0;
- (void)withinQueueScheduleReconnect:(struct duration<long long, std::ratio<1, 1000000000>> { long long x0; })a0 reason:(id)a1;
- (id /* block */)_defaultErrHandler:(id /* block */)a0 forCaller:(id)a1;
- (void)withinQueueInterruptionHandler;
- (id /* block */)_defaultErrHandlerForCaller:(id)a0;

@end
