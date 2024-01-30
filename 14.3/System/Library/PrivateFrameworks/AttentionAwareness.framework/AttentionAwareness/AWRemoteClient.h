@class NSXPCConnection, NSString, NSArray, NSSet, AWScheduler, NSObject, AWAttentionAwarenessConfiguration, AWAttentionEvent;
@protocol OS_dispatch_queue, AWFrameworkClient;

@interface AWRemoteClient : NSObject <AWRemoteClient> {
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id<AWFrameworkClient> _proxy;
    NSXPCConnection *_connection;
    unsigned long long _tagIndex;
    unsigned long long _notificationMask;
    unsigned long long _eventMask;
    unsigned long long _attentionLostEventMask;
    BOOL _sampleWhileAbsent;
    NSArray *_attentionLostTimeoutsSec;
    NSSet *_allowedHIDEventsForRemoteEvent;
    struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; } *_clientState;
    AWAttentionEvent *_lastEvent;
    AWAttentionAwarenessConfiguration *_lastConfig;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long samplingInterval;
@property (readonly, nonatomic) unsigned long long samplingDelay;
@property (readonly, nonatomic) BOOL invalid;
@property (readonly, nonatomic) int clientIndex;

- (void)setClientConfig:(id)a0 shouldReset:(BOOL)a1 reply:(id /* block */)a2;
- (void)resetAttentionLostTimerWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)initializeClientState;
- (BOOL)_setClientConfig:(id)a0 shouldReset:(BOOL)a1 error:(id *)a2;
- (BOOL)_isSamplingClient;
- (void)deliverEvent:(id)a0;
- (void)updateEventTimesForMask:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)updateDeadlinesForTime:(unsigned long long)a0;
- (unsigned long long)nextTimerForTime:(unsigned long long)a0;
- (id)description;
- (void)pingWithReply:(id /* block */)a0;
- (void)notifyEvent:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)_resetAttentionLostTimer;
- (void)getLastEvent:(id /* block */)a0;
- (void)notifyEvent:(unsigned long long)a0 timestamp:(unsigned long long)a1 metadata:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; } x0; struct AWRemoteMetadata { long long x0; long long x1; } x1; } *)a2;
- (void)pollWithTimeout:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)notifyHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2;
- (void)deliverNotification:(unsigned long long)a0;
- (void)deliverPollEventType:(unsigned long long)a0 event:(id)a1;
- (BOOL)_interestedInHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 metadata:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; } x0; struct AWRemoteMetadata { long long x0; long long x1; } x1; } *)a2;
- (id)initWithProxy:(id)a0 connection:(id)a1 clientConfig:(id)a2 clientIndex:(int)a3 scheduler:(id)a4 error:(id *)a5;
- (void)reevaluateConfig;
- (void)invalidateWithHandler:(id /* block */)a0;
- (unsigned long long)nextSampleTime;
- (void)invalidate;
- (id)connection;
- (unsigned long long)nextAttentionLostTime:(BOOL *)a0;
- (unsigned long long)_activeEventMask;

@end
