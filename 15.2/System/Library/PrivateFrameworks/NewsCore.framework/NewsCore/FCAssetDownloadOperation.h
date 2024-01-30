@class NSError, NSString, NSURL, NSData, FCURLRequestScheduler, NSDictionary, FCNetworkBehaviorMonitor, NSHTTPURLResponse;

@interface FCAssetDownloadOperation : FCNetworkOperation

@property (retain, nonatomic) FCURLRequestScheduler *scheduler;
@property (retain, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSData *downloadedData;
@property (retain, nonatomic) NSString *requestUUID;
@property (nonatomic) double taskStartTime;
@property (retain, nonatomic) NSDictionary *timingData;
@property (retain, nonatomic) NSString *responseMIMEType;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) unsigned long long responseSize;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *loggingKey;
@property (nonatomic) long long downloadDestination;
@property (nonatomic) int networkEventType;
@property (nonatomic) unsigned long long cachePolicy;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (copy, nonatomic) id /* block */ fileDownloadCompletionHandler;
@property (copy, nonatomic) id /* block */ dataDownloadCompletionHandler;

+ (id)sharedURLSession;
+ (id)sharedURLRequestScheduler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (id)throttleGroup;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithURLRequestScheduler:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
