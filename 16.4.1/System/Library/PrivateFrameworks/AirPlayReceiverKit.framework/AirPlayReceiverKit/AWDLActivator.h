@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWDLActivator : NSObject {
    struct BonjourBrowser { } *_browser;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)_stopInternal;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)startWithMaxDuration:(long long)a0;

@end
