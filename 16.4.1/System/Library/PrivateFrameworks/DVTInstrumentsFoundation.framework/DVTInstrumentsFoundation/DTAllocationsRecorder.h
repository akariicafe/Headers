@class NSObject;
@protocol OS_dispatch_queue;

@interface DTAllocationsRecorder : NSObject {
    struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; _Atomic int x7; _Atomic int x8; _Atomic unsigned int x9; _Atomic int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; unsigned int x14; unsigned int x15; unsigned int x16; char x17[0]; } *_shmem;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _trackingSymbolicator;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_serialEventQueue;
    struct { double x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; long long x6; unsigned long long x7[0]; } *_partialEvent;
    struct { double x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; long long x6; unsigned long long x7[0]; } *_fullEvent;
    unsigned int _partialSize;
    unsigned int _partialFilled;
    int _eventTotal;
    unsigned long long _bytesTotal;
    _Atomic unsigned long long _outstandingBytes;
    unsigned int _targetTask;
    int _stopCollection;
    struct map<unsigned long long, std::map<unsigned int, OAKeyFrame *>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> { struct __tree<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _threadToKeyFramesMap;
}

@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ bufferHandler;
@property (nonatomic) BOOL readStackLogsUponAttach;
@property (nonatomic) unsigned int sharedMemorySize;
@property (readonly) int eventCount;

+ (id)serviceIdentifier;
+ (int)currentVersion;
+ (id)_libraryPath;
+ (unsigned int)allEventsMask;
+ (BOOL)configureLocalLaunchEnvironment:(id)a0 recordedEventsMask:(unsigned int)a1;
+ (unsigned int)cppClassNamesMask;
+ (unsigned int)mallocReallocFreeEventsMask;
+ (unsigned int)retainReleaseAutoEventsMask;
+ (unsigned int)vmEventsMask;
+ (unsigned int)zombieEventsMask;

- (id).cxx_construct;
- (void)cancel;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_startWithError:(id *)a0;
- (void)_endAndTossResources:(BOOL)a0;
- (void)_processIncomingData;
- (unsigned long long)_setupSharedMemoryInTask:(unsigned int)a0;
- (void)addKeyFrame:(struct { double x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; long long x6; unsigned long long x7[0]; } *)a0;
- (void)createFullEventFromDelta:(struct { double x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; long long x6; unsigned long long x7[0]; } *)a0 withEvent:(struct { double x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; long long x6; unsigned long long x7[0]; } *)a1;
- (void)processBufferMessage:(id)a0;
- (void)startAttachingToTask:(unsigned int)a0 recordedEventsMask:(unsigned int)a1 errorHandler:(id /* block */)a2;
- (BOOL)startForProcessingBuffersWithError:(id *)a0;

@end
