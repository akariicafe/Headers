@class FCNetworkBehaviorMonitor, NSString, NSDictionary, NSURL, NSData, NSHTTPURLResponse, NSError;

@interface FCAssetDownloadOperation : FCNetworkOperation

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
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (copy, nonatomic) id /* block */ fileDownloadCompletionHandler;
@property (copy, nonatomic) id /* block */ dataDownloadCompletionHandler;

+ (id)sharedURLSession;
+ (id)sharedURLRequestScheduler;

- (void)prepareOperation;
- (unsigned long long)maxRetries;
- (void).cxx_destruct;
- (id)throttleGroup;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
