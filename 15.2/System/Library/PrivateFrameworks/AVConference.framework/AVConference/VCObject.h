@class NSString, VCDispatchTimer;

@interface VCObject : NSObject {
    id _reportingAgent;
    VCDispatchTimer *_timeoutTimer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _timeoutMutex;
}

@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

- (void)unlock;
- (void)lock;
- (void)stopTimeoutTimer;
- (void)startTimeoutTimer;
- (id)init;
- (void)dealloc;
- (void)startDeallocTimer;
- (void)startDeallocTimerWithTimeout:(unsigned int)a0;
- (void)stopTerminationTimer;
- (void)startTerminationTimer:(unsigned int)a0;

@end
