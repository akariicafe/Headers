@class NSString, NSMapTable, NSConditionLock, NSMutableDictionary, VMUProcessDescription, NSMutableArray;

@interface VMUSampler : NSObject {
    unsigned long long _options;
    int _pid;
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    BOOL _recordThreadStates;
    BOOL _sampling;
    unsigned int _numberOfCopiedBacktraces;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    unsigned int _suspensionToken;
    struct sampling_context_t { } *_samplingContext;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int *_previousThreadList;
    unsigned int _mainThread;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    id _delegate;
    double _timeSpentSampling;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
    NSMutableDictionary *_threadPortToNameMap;
    NSMutableDictionary *_dispatchQueueSerialNumToNameMap;
}

+ (void)initialize;
+ (id)sampleAllThreadsOfPID:(int)a0;
+ (id)sampleAllThreadsOfTask:(unsigned int)a0;
+ (id)sampleAllThreadsOfTask:(unsigned int)a0 symbolicate:(BOOL)a1;

- (double)timeLimit;
- (id)initWithPID:(int)a0 task:(unsigned int)a1 processName:(id)a2 is64Bit:(BOOL)a3 options:(unsigned long long)a4;
- (void)_runSamplingThread;
- (id)initWithTask:(unsigned int)a0;
- (id)sampleThread:(unsigned int)a0;
- (id)samples;
- (id)initWithPID:(int)a0 options:(unsigned long long)a1;
- (void)setTimeLimit:(double)a0;
- (id)initWithTask:(unsigned int)a0 options:(unsigned long long)a1;
- (unsigned int)mainThread;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicator;
- (id)stopSamplingAndReturnCallNode;
- (id)sampleAllThreadsOnce;
- (void)setRecordThreadStates:(BOOL)a0;
- (void)forceStop;
- (id)threadDescriptionStringForBacktrace:(id)a0 returnedAddress:(unsigned long long *)a1;
- (id)initWithPID:(int)a0 orTask:(unsigned int)a1 options:(unsigned long long)a2;
- (void)flushData;
- (void)setDelegate:(id)a0;
- (BOOL)start;
- (void)setSampleLimit:(unsigned int)a0;
- (void)setSamplingInterval:(double)a0;
- (void).cxx_destruct;
- (id)initWithPID:(int)a0;
- (id)delegate;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)a0 returnedConcurrentFlag:(BOOL *)a1 returnedThreadId:(unsigned long long *)a2;
- (unsigned int)sampleCount;
- (unsigned long long)recordSampleTo:(id)a0 beginTime:(double)a1 endTime:(double)a2 thread:(unsigned int)a3 recordFramePointers:(BOOL)a4 clearMemoryCache:(BOOL)a5;
- (void)_checkDispatchThreadLimits;
- (void)initializeSamplingContextWithOptions:(int)a0;
- (BOOL)waitUntilDone;
- (id)outputString;
- (void)preloadSymbols;
- (void)stopSampling;
- (void)dealloc;
- (id)sampleAllThreadsOnceWithFramePointers:(BOOL)a0;
- (int)pid;
- (id)threadNameForThread:(unsigned int)a0;
- (void)writeOutput:(id)a0 append:(BOOL)a1;
- (unsigned int)sampleLimit;
- (id)threadNameForThread:(unsigned int)a0 returnedThreadId:(unsigned long long *)a1 returnedDispatchQueueSerialNum:(unsigned long long *)a2;
- (double)samplingInterval;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)a0;
- (void)sampleForDuration:(unsigned int)a0 interval:(unsigned int)a1;
- (BOOL)stop;
- (void)_fixupStacks:(id)a0;

@end
