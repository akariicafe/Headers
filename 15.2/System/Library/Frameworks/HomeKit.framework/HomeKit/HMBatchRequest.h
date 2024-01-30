@class NSArray, HMReportContext, HMClientContext;

@interface HMBatchRequest : NSObject

@property (retain, nonatomic) NSArray *requests;
@property (retain, nonatomic) HMClientContext *clientContext;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) HMReportContext *reportContext;

+ (BOOL)validateRequestTypes:(id)a0 requestClass:(Class)a1;
+ (id)batchRequestWithReadRequests:(id)a0;
+ (id)batchRequestWithWriteRequests:(id)a0;
+ (id)batchRequestWithExecuteRequests:(id)a0;

- (void).cxx_destruct;
- (id)initWithRequests:(id)a0 requestClass:(Class)a1;

@end
