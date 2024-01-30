@class CKStreamingAsset, NSString, NSURLSessionDataTask, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface CKStreamingAssetAppendContext : NSObject <C2RequestDelegate>

@property (retain, nonatomic) CKStreamingAsset *streamingAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appendQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, getter=isAppending) BOOL appending;
@property (nonatomic, getter=isCurrentAppendCancelled) BOOL currentAppendCancelled;
@property (nonatomic) unsigned long long currentSegmentLength;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (retain, nonatomic) NSString *requestUUID;
@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL fakeMissingUploadReceipt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestToAppendSegmentData:(id)a0 uploadURL:(id)a1 requestUUID:(id)a2 offset:(unsigned long long)a3;

- (void)abort;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (BOOL)appendSegmentWithData:(id)a0 newStreamingAsset:(id *)a1 error:(id *)a2;
- (void)appendSegmentWithData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithStreamingAsset:(id)a0;
- (BOOL)appendSegmentWithData:(id)a0 error:(id *)a1;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;

@end
