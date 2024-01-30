@class NSObject;
@protocol OS_dispatch_queue;

@interface NSXPCStoreNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    id _store;
}

- (void)setStore:(id)a0;
- (void).cxx_destruct;
- (id)initForObservationWithName:(id)a0 store:(id)a1;
- (void)dealloc;
- (id)_store;

@end
