@class NSString, VCDispatchTimer;

@interface VCObject : NSObject {
    id _reportingAgent;
    VCDispatchTimer *_timeoutTimer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;
- (void)startDeallocTimer;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)startDeallocTimerWithTimeout:(unsigned int)a0;
- (void)stopTerminationTimer;
- (void)startTerminationTimer:(unsigned int)a0;

@end
