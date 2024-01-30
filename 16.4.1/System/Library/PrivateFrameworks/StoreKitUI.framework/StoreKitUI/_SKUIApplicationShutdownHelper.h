@class SKUIApplicationController;

@interface _SKUIApplicationShutdownHelper : NSObject {
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)initWithApplicationController:(id)a0;

@end
