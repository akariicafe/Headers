@class SKUIApplicationController;

@interface _SKUIApplicationShutdownHelper : NSObject {
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithApplicationController:(id)a0;

@end
