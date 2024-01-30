@class NSString, SATimestamp, NSMutableDictionary, NSMutableArray;

@interface SAStack : NSObject {
    BOOL _omit;
    BOOL _isMainThread;
    BOOL _isTargetThread;
    BOOL _isIdleWorkQueue;
    BOOL _threadNameChanges;
    BOOL _isProcessorIdleThread;
    BOOL _isGlobalForcedIdleThread;
    int _minPriority;
    int _maxPriority;
    int _minBasePriority;
    int _maxBasePriority;
    unsigned long long _count;
    NSMutableArray *_dispatchQueues;
    NSMutableArray *_swiftTasks;
    NSMutableArray *_threadIds;
    NSString *_threadName;
    unsigned long long _firstSampleIndex;
    unsigned long long _lastSampleIndex;
    SATimestamp *_timeWhenFirstAttemptedToSample;
    unsigned long long _cpuTimeNs;
    unsigned long long _cpuInstructions;
    unsigned long long _cpuCycles;
    NSMutableArray *_rootObjects;
    NSMutableDictionary *_binaryImagesHitByTask;
    unsigned long long _ioSize;
    unsigned long long _numIOs;
}

- (void).cxx_destruct;

@end
