@class NSHashTable, NSObject, Protocol;
@protocol OS_dispatch_queue;

@interface GEOObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) BOOL hasObservers;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)description;
- (id)initWithProtocol:(id)a0 queue:(id)a1;

@end
