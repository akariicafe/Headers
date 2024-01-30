@class NSURLSessionTask, NSDictionary, NSData, NSError, NSMutableArray, NSURLRequest;

@interface AMSMockURLResponse : NSObject

@property (retain, nonatomic) NSMutableArray *responseHandlerBlocks;
@property (retain, nonatomic) NSURLSessionTask *runningTask;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long statusCode;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSData *body;
@property (nonatomic) BOOL performActualRequest;
@property (readonly, nonatomic) NSURLRequest *originalRequest;

+ (id)responseWithError:(id)a0;
+ (id)responseFromActualResponse;
+ (id)responseWithHARFile:(id)a0;
+ (id)responseWithStatus:(unsigned long long)a0 headers:(id)a1 body:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addResponseHandler:(id /* block */)a0;
- (struct { id x0; id x1; id x2; })handleReceivedRequest:(id)a0;
- (void)stopRunningTasks;

@end
