@class NSObject;
@protocol OS_dispatch_source;

@interface ATCountSessionTask : ATSessionTask {
    unsigned long long _maxCount;
    unsigned long long _count;
    NSObject<OS_dispatch_source> *_timer;
}

- (id)initWithMaximumCount:(unsigned long long)a0;
- (void)start;
- (void).cxx_destruct;

@end
