@class MSTimerGate, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MSClientSidePauseContext : NSObject {
    NSString *_UUID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) NSXPCConnection *server;
@property (retain, nonatomic) MSTimerGate *gate;

- (void).cxx_destruct;
- (void)resume;
- (id)initWithServer:(id)a0;
- (void)timerQueueTimerFired;
- (void)timerQueuePing;

@end
