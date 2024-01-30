@class NSObject, NSMutableArray, _NSHTTPConnectionInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTTPPing : NSObject {
    _NSHTTPConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pingTimes;
    unsigned long long _outstandingCount;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _progressHandler;
}

- (void).cxx_destruct;
- (void)stop;
- (id)getPingTimes;
- (id)initWithConnectionInfo:(id)a0 pingInterval:(double)a1 progressHandler:(id /* block */)a2;
- (void)emitPing;

@end
