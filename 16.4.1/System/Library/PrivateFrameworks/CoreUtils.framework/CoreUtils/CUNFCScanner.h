@class NSMutableArray, NSString, CURetrier, NFReaderSession, NFTag, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NFSession;

@interface CUNFCScanner : NSObject <NFReaderSessionDelegate> {
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_queue> *_nfcDispatchQueue;
    NFTag *_nfcConnectedTag;
    NSMutableArray *_nfcDevices;
    BOOL _nfcPollingHW;
    NSObject<OS_dispatch_source> *_nfcPollTimer;
    CURetrier *_nfcRetrier;
    NFReaderSession *_nfcSession;
    BOOL _nfcStarted;
    NSObject<NFSession> *_nfcTempSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL pauseWhenFound;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ foundDeviceHandler;
@property (copy, nonatomic) id /* block */ lostDeviceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateWithError:(id)a0;
- (void)pause;
- (void)_pause;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:(id)a0 error:(id)a1;
- (void)_handleTagFound:(id)a0;
- (id)_parseRecord:(id)a0;
- (BOOL)_pollTag:(id)a0;
- (void)_pollTags;
- (id)_readTag:(id)a0;
- (void)_updatePolling;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSessionDidEndUnexpectedly:(id)a0;

@end
