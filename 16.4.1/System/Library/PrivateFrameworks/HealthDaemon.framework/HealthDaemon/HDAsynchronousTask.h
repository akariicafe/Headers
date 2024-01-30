@class NSObject;
@protocol OS_dispatch_queue;

@interface HDAsynchronousTask : NSObject {
    BOOL _hasTimeout;
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    id /* block */ _checkpointHandler;
}

- (void).cxx_destruct;

@end
