@class NSString, NSURLResponse, NSError, NSObject;
@protocol OS_dispatch_data;

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSURLAuthenticationChallengeSender, NSCopying> {
    struct SessionConnectionLoadable { void /* function */ **x0; void /* function */ **x1; void /* function */ **x2; id x3; } *_loaderClient;
    struct URLConnectionLoader { void /* function */ **x0; struct __CFAllocator *x1; void /* function */ **x2; unsigned char x3; unsigned char x4; struct InterfaceRequiredForLoader *x5; id x6; void /* function */ **x7; void /* function */ **x8; id x9; id x10; long long x11; struct RedirectionRecorder *x12; unsigned char x13; unsigned char x14; unsigned char x15; id x16; unsigned char x17; double x18; double x19; unsigned char x20; struct URLProtocol *x21; id x22; unsigned char x23; struct CoreSchedulingSet *x24; double x25; double x26; unsigned long long x27; struct ConfigFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned long long x33; unsigned int x34; unsigned char x35; BOOL x36; } *_loader;
    BOOL _canceled;
    long long _suspended;
    NSObject<OS_dispatch_data> *_pendingData;
    long long _pendingCompletion;
    unsigned long long _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    long long _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    BOOL _isMixedReplace;
    BOOL _didCheckMixedReplace;
    BOOL _didCheckCredentialsSuppliedInURL;
    BOOL _actuallyTriedCredentialsSuppliedInURL;
    unsigned long long _maxDataSegmentCoalesceThreshhold;
    unsigned long long _maxDataSegmentCount;
    unsigned int _didReceiveDataCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAuthenticationChallenge:(id)a0;
- (void)setPoolPriority:(long long)a0;
- (void)setIsDownload:(BOOL)a0;
- (void)_connectionIsWaitingWithReason:(long long)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)_needNewBodyStream;
- (void)_didFinishWithError:(id)a0;
- (void)_ackBytes:(long long)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)withLoaderAsync:(id /* block */)a0;
- (void)suspend;
- (void)_didReceiveResponse:(id)a0 sniff:(BOOL)a1;
- (void)cancel;
- (void)dealloc;
- (void)_capturedSocketInputStream:(id)a0 outputStream:(id)a1;
- (id)initWithTask:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)_didSendBodyData:(struct UploadProgressInfo { long long x0; long long x1; long long x2; })a0;
- (void)setBytesPerSecondLimit:(long long)a0;
- (void)_alternatePathAvailable:(int)a0;
- (void)_redirectRequest:(id)a0 redirectResponse:(id)a1 completion:(id /* block */)a2;
- (void)_didReceiveChallenge:(id)a0;
- (void)_didUseCachedResponse;
- (void)_didReceiveData:(id)a0;
- (void)setPriorityHint:(float)a0 incremental:(BOOL)a1;
- (void)_captureTransportConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection *x0; struct __shared_weak_count *x1; })a0 extraBytes:(id)a1;
- (void)expectedProgressTargetChanged;
- (void)_conditionalRequirementsChanged:(BOOL)a0;
- (void)resume;
- (void)_willSendRequestForEstablishedConnection:(id)a0 completion:(id /* block */)a1;

@end
