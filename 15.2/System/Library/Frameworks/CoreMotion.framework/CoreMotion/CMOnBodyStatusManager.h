@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    void *fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (BOOL)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)connect;
- (void)stopOnBodyStatusDetection;
- (void)disconnect;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)setPropertiesWithDictionary:(id)a0;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)dealloc;

@end
