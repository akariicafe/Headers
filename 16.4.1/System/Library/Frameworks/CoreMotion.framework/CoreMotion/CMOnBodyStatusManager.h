@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    void *fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (id)sharedOnBodyStatusManager;
+ (BOOL)isOnBodyStatusDetectionAvailable;

- (void)connect;
- (void)setPropertiesWithDictionary:(id)a0;
- (void)disconnect;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)dealloc;
- (void)stopOnBodyStatusDetection;
- (id)init;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;

@end
