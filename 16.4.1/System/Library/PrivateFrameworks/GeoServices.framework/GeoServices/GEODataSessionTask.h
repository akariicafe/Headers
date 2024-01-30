@class NSData, NSString, NSError, NSURL, GEODataSession, GEODataURLSessionTask, NSObject, GEOClientMetrics;
@protocol OS_os_activity, GEODataSessionTaskDelegate, GEORequestCounterTicket, NSObject, OS_dispatch_queue, GEODataSessionTask;

@interface GEODataSessionTask : NSObject <GEODataSessionTaskDelegate, GEODataSessionTask> {
    double _startTime;
    double _endTime;
    BOOL _didStart;
    BOOL _willSendRequestDelegateCalled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *entityTag;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, nonatomic) unsigned long long receivedDataLength;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) long long responseSource;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) NSURL *originalRequestURL;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double loadTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (weak, nonatomic) id<GEODataSessionTaskDelegate> delegate;
@property (weak, nonatomic) GEODataSession *session;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) GEODataURLSessionTask *urlTask;
@property (retain, nonatomic) id<GEODataSessionTask> completedSubtask;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) struct { int type; union { int raw; int tile; int placeRequest; } subtype; } requestKind;
@property float priority;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic) unsigned long long receivedDataLength;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) id<GEORequestCounterTicket> requestCounterTicket;
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) id<NSObject> parsedResponse;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataSession:(id)a0 shouldConvertDataTask:(id)a1 toDownloadTaskForEstimatedResponseSize:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)getHeaderValue:(id *)a0 forField:(id)a1;
- (BOOL)didValidateEntityTagForData:(id *)a0 entityTag:(id *)a1;
- (void)cancel;
- (double)loadTimeIncludingTask:(id)a0;
- (void)dataSession:(id)a0 didCompleteTask:(id)a1;
- (BOOL)validateTileResponse:(BOOL)a0 error:(id *)a1;
- (BOOL)validateTransportWithError:(id *)a0;
- (void)start;
- (void)_didCompleteSubtask:(id)a0;
- (void)dataSession:(id)a0 willSendRequest:(id)a1 forTask:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithSession:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 requestCounterTicket:(id)a4;
- (void).cxx_destruct;

@end
