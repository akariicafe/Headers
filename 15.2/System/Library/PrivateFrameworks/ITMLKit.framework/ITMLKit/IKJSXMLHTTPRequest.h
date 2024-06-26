@class NSURL, NSHTTPURLResponse, NSDictionary, NSURLSession, NSMutableArray, NSMutableURLRequest, NSString, IKDOMDocument, NSURLConnection, ISURLOperation, NSNumber, NSData, JSManagedValue, NSError, NSURLSessionConfiguration;
@protocol IKNetworkRequestRecord;

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <ISStoreURLOperationDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, IKJSXMLHTTPRequest> {
    BOOL _shouldSquashOnReadyStateEvents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _onReadyStateChangeMessageQueueLock;
    BOOL _async;
    BOOL _inProgress;
}

@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) id<IKNetworkRequestRecord> networkRequestRecord;
@property (copy, nonatomic) NSString *dataToSend;
@property (nonatomic) BOOL jingleRequest;
@property (weak, nonatomic) ISURLOperation *jingleOperation;
@property (retain, nonatomic) NSMutableArray *onReadyStateChangeMessageQueue;
@property (retain, nonatomic) NSMutableURLRequest *urlRequest;
@property (copy, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSURLConnection *urlConnection;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) long long primeRetryCount;
@property (readonly, nonatomic) BOOL primeEnabled;
@property (retain, nonatomic) NSHTTPURLResponse *urlResponse;
@property (retain) NSData *receivedData;
@property (readonly, nonatomic) long long reprimingResponseStatus;
@property (nonatomic) long long requestReadyState;
@property (nonatomic) unsigned int requestStatusCode;
@property (retain, nonatomic) NSString *requestStatusText;
@property (nonatomic) long long requestResponseType;
@property (retain, nonatomic) NSError *requestError;
@property unsigned int readyState;
@property unsigned int status;
@property (retain) NSString *statusText;
@property (retain) NSDictionary *performanceMetrics;
@property (retain) NSHTTPURLResponse *cachedURLResponse;
@property (retain, nonatomic) JSManagedValue *managedSelf;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long timeout;
@property (readonly) NSString *responseText;
@property (readonly) IKDOMDocument *responseXML;
@property (retain) NSString *responseType;
@property (readonly) id response;
@property (readonly) NSDictionary *metrics;

+ (id)xhrOperationQueue;

- (void)abort;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)send:(id)a0;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)operation:(id)a0 willSendRequest:(id)a1;
- (void)_abort;
- (void)connectionDidFinishLoading:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_prime:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_operationFinished:(id)a0;
- (id)_timeIntervalSince1970;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)a0;
- (void)operation:(id)a0 didDiscoverContentLength:(id)a1;
- (void)operation:(id)a0 didReceiveResponse:(id)a1;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)initWithAppContext:(id)a0 jingleRequest:(BOOL)a1;
- (void)_setException:(id)a0;
- (void)_openWithMethod:(id)a0 url:(id)a1 async:(BOOL)a2 user:(id)a3 password:(id)a4;
- (void)_sendWithData:(id)a0;
- (id)responseJSON;
- (id)responseBlob;
- (id)responseArrayBuffer;
- (id)_dequeueReadyStateChangeMessage;
- (id)_constructProgressEventData;
- (id)_createStoreOperation:(id)a0;
- (void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
- (id)_loadingWillSendRequest:(id)a0 redirectResponse:(id)a1;
- (void)_loadingDidReceiveResponse:(id)a0 timingData:(id)a1;
- (void)_loadingDidReceiveData:(id)a0;
- (void)_loadingDidFailWithError:(id)a0;
- (void)_loadingDidFinish;
- (BOOL)_isPrimeError:(long long)a0 output:(id)a1;
- (void)_reprime:(id)a0;
- (void)open:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;
- (void)setRequestHeader:(id)a0 :(id)a1;

@end
