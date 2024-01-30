@class NSArray;

@interface REDispatchQueuePool : NSObject {
    unsigned long long _currentIndex;
    NSArray *_queues;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (id)initWithQueueCount:(unsigned long long)a0 prefix:(id)a1;
- (id)nextAvailableQueue;

@end
