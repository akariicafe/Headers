@class NSObject;
@protocol OS_dispatch_queue;

@interface HDAsynchronousTask : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL hasTimeout;
@property (copy, nonatomic) id /* block */ checkpointHandler;

- (void).cxx_destruct;

@end
