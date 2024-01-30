@class NSObject;
@protocol HDContentProtectionObserver, OS_dispatch_queue;

@interface _HDContentProtectionObserverWrapper : NSObject {
    id<HDContentProtectionObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;

@end
