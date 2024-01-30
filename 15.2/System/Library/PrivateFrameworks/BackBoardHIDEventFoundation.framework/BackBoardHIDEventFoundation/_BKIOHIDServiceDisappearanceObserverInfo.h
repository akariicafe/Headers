@class NSObject;
@protocol OS_dispatch_queue, BKIOHIDServiceDisappearanceObserver;

@interface _BKIOHIDServiceDisappearanceObserverInfo : NSObject {
    id<BKIOHIDServiceDisappearanceObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;

@end
