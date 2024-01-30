@class NSObject, NSURLSessionDataTask, NSURLSession;
@protocol OS_dispatch_queue, ASKResourceDataConsumer;

@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation

@property (class, readonly) NSURLSession *URLSession;
@property (class, readonly) NSObject<OS_dispatch_queue> *dataConsumerQueue;

@property (readonly, nonatomic) NSURLSessionDataTask *task;
@property (readonly, nonatomic) id<ASKResourceDataConsumer> dataConsumer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataConsumerQueue;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (void)cancel;
- (void)setQueuePriority:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2 dataConsumerQueue:(id)a3;
- (void)start;
- (void)didFinishTaskWithData:(id)a0 response:(id)a1 error:(id)a2;

@end
