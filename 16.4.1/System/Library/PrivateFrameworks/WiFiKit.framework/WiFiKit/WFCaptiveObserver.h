@class NSObject;
@protocol OS_dispatch_queue;

@interface WFCaptiveObserver : NSObject

@property (nonatomic, getter=isObserving) BOOL observing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captiveNotificationQueue;
@property (nonatomic) int startCaptiveNotificationToken;
@property (nonatomic) int endCaptiveNotificationToken;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startObservingEvents;
- (void)stopObservingEvents;

@end
