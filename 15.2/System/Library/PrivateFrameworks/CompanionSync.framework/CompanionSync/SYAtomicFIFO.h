@class NSMutableArray;

@interface SYAtomicFIFO : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_store;
}

@property (readonly) id head;
@property (readonly) id tail;

- (id)dequeue;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enqueue:(id)a0;
- (id)dequeueUntil:(id /* block */)a0;

@end
