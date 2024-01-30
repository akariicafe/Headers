@class NSData, NSString, NSHTTPURLResponse, NSError, NSURL, NSDictionary, NSObject, NSNumber, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface RCURLFetchOperation : RCOperation

@property (retain) NSURLSessionTask *requestTask;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSString *requestUUID;
@property (nonatomic) double taskStartTime;
@property (retain, nonatomic) NSDictionary *timingData;
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
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

+ (id)sharedURLSession;

- (void)resetForRetry;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)setRelativePriority:(long long)a0;

@end
