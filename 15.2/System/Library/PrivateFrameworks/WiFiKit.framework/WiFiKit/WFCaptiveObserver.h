@class NSObject;
@protocol OS_dispatch_queue;

@interface WFCaptiveObserver : NSObject

@property (nonatomic, getter=isObserving) BOOL observing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captiveNotificationQueue;
@property (nonatomic) int startCaptiveNotificationToken;
@property (nonatomic) int endCaptiveNotificationToken;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopObservingEvents;
- (void)startObservingEvents;

@end
