@class Protocol, NSHashTable, NSObject, geo_isolater;
@protocol OS_dispatch_queue;

@interface MNObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    geo_isolater *_observerLock;
}

@property (readonly) BOOL hasObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithProtocol:(id)a0;
- (void)addObserver:(id)a0;
- (id)description;
- (unsigned long long)count;

@end
