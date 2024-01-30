@class NSMutableArray, NSString, CPSClipRequest, NSTimer, BCSNotificationService, NSObject, NFReaderSession;
@protocol NFSession, BCSNFCReaderDelegate, OS_os_transaction, OS_dispatch_queue;

@interface BCSNFCReader : NSObject <NFReaderSessionDelegate> {
    id<BCSNFCReaderDelegate> _delegate;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_disconnectQueue;
    id<NFSession> _tentativeSession;
    NFReaderSession *_session;
    NSMutableArray *_urlQueue;
    CPSClipRequest *_clipRequest;
    NSTimer *_reactivateTimer;
    NSObject<OS_os_transaction> *_transaction;
    long long _sessionErrorCount;
}

@property (readonly, nonatomic) long long state;
@property (weak, nonatomic) BCSNotificationService *notificationService;
@property (nonatomic) double postNotificationReactivationDelay;
@property (nonatomic) double dismissProxCardReactivationDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_restart;
- (BOOL)_isWaiting;
- (id)initWithDelegate:(id)a0;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSessionDidEndUnexpectedly:(id)a0 reason:(id)a1;
- (void)readerSession:(id)a0 externalReaderFieldNotification:(id)a1;
- (void)_performBlockOnQueue:(id /* block */)a0;
- (BOOL)_readTag:(id)a0;
- (void)startReading;
- (BOOL)_startPolling;
- (void)_stopPolling;
- (void)_setStateAndNotifyDelegate:(long long)a0;
- (void)_startReading;
- (void)_stopReadingAndTransitionToState:(long long)a0;
- (void)_didDetectTags:(id)a0;
- (void)_startProcessingURLs;
- (void)_restartPolling;
- (void)_disconnectTagAndBlockReadingUntilRemoved;
- (void)_disconnectTag;
- (void)_processNextURL;
- (void)_requestNotificationForURLRecord:(id)a0;
- (void)_didFindLink;
- (void)_requestAppClipForURLRecord:(id)a0;
- (void)_scheduleReactivationWithDelay:(double)a0;
- (void)stopReading;

@end
