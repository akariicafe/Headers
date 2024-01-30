@class BWLimitedGMErrorLogger, NSMutableArray, NSObject;
@protocol BWNodeBackPressureSource, OS_dispatch_semaphore;

@interface BWBackPressureNode : BWNode {
    unsigned int _numberOfInputs;
    NSMutableArray *_receivedPresentationTimestampByInput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _presentationTimestampLock;
    long long _initialSemaphoreValue;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _numEODMessagesReceived;
    BOOL _receivedFirstFrame;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) id<BWNodeBackPressureSource> backPressureSourceNode;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)initWithNumberOfInputsAndOutputs:(unsigned int)a0 initialSemaphoreValue:(long long)a1;
- (void)setInitialSemaphoreValue:(int)a0;
- (void)dealloc;
- (void)_handleUpdatedPresentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forIndex:(unsigned long long)a1;
- (id)init;
- (void)_setSemaphore:(id)a0;

@end
