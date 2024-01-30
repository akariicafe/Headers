@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface HDFitnessMachineStateTimer : NSObject {
    NSString *_name;
    unsigned long long _duration;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
