@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _REAudioManagerAsyncListenerUpdater : NSObject {
    struct OpaqueFigSTS { } *_sts;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _quitting;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _updateCount;
    double _totalLatency;
    double _maxUpdateLatency;
    unsigned long long _cumulativeUpdateCount;
    int _droppedUpdates;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSTS:(struct OpaqueFigSTS { } *)a0;
- (void)updateListenerTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
