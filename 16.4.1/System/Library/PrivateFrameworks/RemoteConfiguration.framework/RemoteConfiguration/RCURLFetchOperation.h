@class NSData, NSString, NSURL, NSError, NSNumber, NSDictionary, NSObject, NSURLSessionTask, NSHTTPURLResponse;
@protocol OS_dispatch_queue;

@interface RCURLFetchOperation : RCOperation

@property (retain) NSURLSessionTask *requestTask;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSString *requestUUID;
@property (nonatomic) double taskStartTime;
@property (retain, nonatomic) NSString *responseMIMEType;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) unsigned long long responseSize;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *maxAge;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSData *HTTPBody;
@property (retain, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSString *loggingKey;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) double URLRequestTimeoutDuration;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ networkEventHandler;

+ (id)sharedURLSession;

- (void)resetForRetry;
- (void)setRelativePriority:(long long)a0;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void)_reportNetworkEventsForTask:(id)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
