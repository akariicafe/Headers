@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SFAnalyticsActivityTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    Class _clientClass;
    unsigned long long _start;
    BOOL _canceled;
}

@property (retain) NSNumber *measurement;

- (void)cancel;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithName:(id)a0 clientClass:(Class)a1;
- (void)stopWithEvent:(id)a0 result:(id)a1;
- (void)start;

@end
