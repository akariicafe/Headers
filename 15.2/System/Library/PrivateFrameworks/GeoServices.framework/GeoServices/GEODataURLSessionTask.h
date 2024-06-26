@class NSURL, NSMutableData, NSHTTPURLResponse, NSDate, NSObject, NSString, GEODataRequest, NSURLRequest, GEOClientMetrics, NSData, NSURLSessionTask, NSError, NSURLSessionTaskMetrics;
@protocol OS_os_activity, GEODataSessionTaskDelegate, GEORequestCounterTicket, OS_voucher, OS_dispatch_queue, NSObject;

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask> {
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSError *_nonBackingTaskError;
    NSMutableData *_receivedData;
    NSURLSessionTaskMetrics *_urlTaskMetrics;
    double _endTime;
    float _priority;
    BOOL _backingTaskNeedsResume;
    unsigned int _qos;
    id<NSObject> _parsedResponse;
    NSDate *_originalStartDate;
    NSObject<OS_voucher> *_voucher;
    NSURL *_downloadedFileURL;
    unsigned long long _cachedDownloadFileSize;
}

@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double loadTime;
@property (readonly, nonatomic) NSString *entityTag;
@property (readonly, nonatomic) NSString *contentLengthString;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) long long HTTPStatusCode;
@property (readonly, nonatomic) NSURL *originalRequestURL;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, weak, nonatomic) id<GEODataSessionTaskDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, nonatomic) NSData *cachedData;
@property (readonly, nonatomic) GEODataRequest *request;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) NSURLSessionTask *backingTask;
@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, nonatomic) unsigned long long receivedDataLength;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURLRequest *originalURLRequest;
@property (readonly, nonatomic) struct { int type; union { int raw; int tile; int placeRequest; } subtype; } requestKind;
@property float priority;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) NSURLSessionTaskMetrics *urlTaskMetrics;
@property (readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) id<GEORequestCounterTicket> requestCounterTicket;
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) id<NSObject> parsedResponse;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)didValidateEntityTagForData:(id *)a0 entityTag:(id *)a1;
- (double)loadTimeIncludingTask:(id)a0;
- (id)createURLSessionTaskWithSession:(id)a0 request:(id)a1;
- (void)_start;
- (BOOL)validateTileResponse:(BOOL)a0 error:(id *)a1;
- (void)backingTask:(id)a0 didBecomeDownloadTask:(id)a1;
- (void)dataSession:(id)a0 didReceiveResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)didFinishDownloadingToURL:(id)a0;
- (void)_prepareForRestart;
- (BOOL)validateNonEmptyResponseWithError:(id *)a0;
- (void)notifyDelegateWithSession:(id)a0;
- (void)didCollectMetrics:(id)a0;
- (void)dataSession:(id)a0 willSendRequestForEstablishedConnection:(id)a1 completionHandler:(id /* block */)a2;
- (void)start;
- (id)initWithSession:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 priority:(float)a4;
- (void)dataSession:(id)a0 taskDidCompleteWithError:(id)a1;
- (id)createURLRequest;
- (void).cxx_destruct;
- (BOOL)validateContentLengthWithError:(id *)a0;
- (id)init;
- (void)didReceiveData:(id)a0;
- (void)updateRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)delegateAsync:(id /* block */)a0;
- (id)_createBackingTaskWithRequest:(id)a0 session:(id)a1;
- (void)cancel;
- (void)setParsedResponse:(id)a0;

@end
