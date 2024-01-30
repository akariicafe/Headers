@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CLIndoorXPCProvider : NSObject {
    NSObject<OS_dispatch_queue> *_frameworkQueue;
    NSXPCConnection *_connection;
    struct optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> { BOOL m_initialized; struct aligned_storage<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } _lastReconnectTime;
    NSObject<OS_dispatch_source> *_interruptReconnection;
}

+ (id)newConnectionFor:(id)a0;

- (void)withinQueueReinitializeRemoteState;
- (id).cxx_construct;
- (id)impl;
- (id)initWithEndpoint:(id)a0;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)withinQueueInitializeConnection;
- (id /* block */)_defaultErrHandler:(id /* block */)a0 forCaller:(id)a1;
- (id /* block */)_defaultErrHandlerForCaller:(id)a0;
- (void)withinQueueHandleReconnect:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0;
- (void)withinQueueInterruptionHandler;
- (void)withinQueueInvalidate;
- (void)withinQueueScheduleReconnect:(struct duration<long long, std::ratio<1, 1000000000>> { long long x0; })a0 reason:(id)a1;
- (int)withinQueueShouldReinitializeRemote:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0;

@end
