@class SKUIApplicationController;

@interface _SKUIApplicationShutdownHelper : NSObject {
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithApplicationController:(id)a0;

@end
