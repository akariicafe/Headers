@class NSOperationQueue, NSURLSessionTask;

@interface WFCloudKitWebServiceTask : WFCloudKitTask

@property (retain, nonatomic) NSURLSessionTask *dataTask;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
