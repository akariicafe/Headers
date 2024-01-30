@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (BOOL)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)connect;
- (void)disconnect;
- (void)stopOnBodyStatusDetectionPrivate;
- (id)init;
- (void)dealloc;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)stopOnBodyStatusDetection;
- (void)setPropertiesWithDictionary:(id)a0;

@end
