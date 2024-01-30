@class NSObject;
@protocol HDContentProtectionObserver, OS_dispatch_queue;

@interface _HDContentProtectionObserverWrapper : NSObject {
    id<HDContentProtectionObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;

@end
