@class NSObject, NSURLSessionDataTask, NSURLSession;
@protocol OS_dispatch_queue, ASKResourceDataConsumer;

@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation

@property (class, readonly) NSURLSession *URLSession;
@property (class, readonly) NSObject<OS_dispatch_queue> *dataConsumerQueue;

@property (readonly, nonatomic) NSURLSessionDataTask *task;
@property (readonly, nonatomic) id<ASKResourceDataConsumer> dataConsumer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataConsumerQueue;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)supportedScheme;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setQueuePriority:(long long)a0;
- (void)cancel;
- (void)didFinishTaskWithData:(id)a0 response:(id)a1 error:(id)a2;
- (BOOL)isAsynchronous;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2 dataConsumerQueue:(id)a3;
- (void)start;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (void).cxx_destruct;

@end
