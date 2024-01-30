@class NSError, NSURLSessionDataTask, NSURLRequest, NSMutableData;

@interface AKURLDataTask : NSObject

@property (retain, nonatomic) NSURLRequest *request;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSURLSessionDataTask *underlyingTask;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (retain, nonatomic) NSError *lastRetryError;
@property (nonatomic) BOOL canceledOrCompleted;

- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;
- (id)description;

@end
