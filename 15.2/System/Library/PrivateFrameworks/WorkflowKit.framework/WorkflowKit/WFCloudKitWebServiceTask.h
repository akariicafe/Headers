@class NSOperationQueue, NSURLSessionTask;

@interface WFCloudKitWebServiceTask : WFCloudKitTask

@property (retain, nonatomic) NSURLSessionTask *dataTask;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
