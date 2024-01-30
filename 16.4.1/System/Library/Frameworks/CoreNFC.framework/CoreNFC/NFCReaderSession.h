@class NFCHardwareManager, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, NFReaderSessionInterface, NFTag, NSXPCProxyCreating;

@interface NFCReaderSession : NSObject <NFReaderSessionCallbacks, NFCHardwareManagerCallbacks, NFCSessionCallbacks, NFCReaderSession> {
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<NFReaderSessionInterface, NSXPCProxyCreating> *_proxy;
    long long _sessionState;
    BOOL _delegateQueueStarted;
    long long _invalidationCode;
    id<NFTag> _currentTag;
    NSObject<OS_dispatch_group> *_sessionStartInProgress;
    NSString *_alertMessage;
}

@property (class, readonly, nonatomic) BOOL readingAvailable;

@property (nonatomic) unsigned long long pollMethod;
@property (nonatomic) unsigned long long sessionConfig;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, retain, nonatomic) NSObject<NFReaderSessionInterface, NSXPCProxyCreating> *readerProxy;
@property (readonly, nonatomic) id<NFTag> currentTag;
@property (readonly, nonatomic) NSNumber *sessionId;
@property (readonly, nonatomic) long long delegateType;
@property (readonly, nonatomic) NFCHardwareManager *hardwareManager;
@property (readonly, weak, nonatomic) id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (copy, nonatomic) NSString *alertMessage;

+ (BOOL)featureAvailable:(unsigned long long)a0;

- (void)hwStateDidChange:(unsigned int)a0;
- (void)invalidateSession;
- (void)didInvalidate;
- (void)dealloc;
- (void)beginSession;
- (void).cxx_destruct;
- (BOOL)connectTag:(id)a0 error:(id *)a1;
- (BOOL)disconnectTagWithError:(id *)a0;
- (BOOL)checkPresenceWithError:(id *)a0;
- (void)didDetectExternalReaderWithNotification:(id)a0;
- (void)didDetectNDEFMessages:(id)a0 fromTags:(id)a1 connectedTagIndex:(unsigned long long)a2 updateUICallback:(id /* block */)a3;
- (void)didDetectTags:(id)a0 connectedTagIndex:(unsigned long long)a1;
- (void)didStartSession:(id)a0;
- (void)didTerminate:(id)a0;
- (void)didUIControllerInvalidate:(id)a0;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)a0;
- (void)restartPolling;
- (void)_callbackDidBecomeActive;
- (void)_callbackDidInvalidateWithError:(id)a0;
- (BOOL)_connectTag:(id)a0 error:(id *)a1;
- (id)_convertMessageToInternal:(id)a0;
- (void)_invalidateSessionAndActivateCallbackWithCode:(long long)a0;
- (void)_invalidateSessionWithCode:(long long)a0;
- (void)_invalidateSessionWithCode:(long long)a0 message:(id)a1 finalUIState:(long long)a2 activateCallback:(BOOL)a3;
- (void)_restartPollingWithCompletionHandler:(id /* block */)a0;
- (void)_resumeDelegateQueue;
- (void)_startPollingWithMethod:(unsigned long long)a0 sessionConfig:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_stopPollingWithCompletionHandler:(id /* block */)a0;
- (void)beginSessionWithConfig:(id)a0;
- (void)cleanupNFCHardwareManagerRegistration;
- (void)connectTag:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1 pollMethod:(unsigned long long)a2;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (void)invalidateSessionWithErrorMessage:(id)a0;
- (void)invalidateSessionWithReason:(long long)a0;
- (id)ndefStatus:(long long *)a0 maxMessageLength:(unsigned long long *)a1;
- (id)readNdefMessageWithError:(id *)a0;
- (void)submitBlockOnDelegateQueue:(id /* block */)a0;
- (void)submitBlockOnSessionQueue:(id /* block */)a0;
- (void)submitBlockOnSessionQueueWithDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (id)transceive:(id)a0 tagUpdate:(id *)a1 error:(id *)a2;
- (BOOL)validateDelegate:(id)a0 expectedType:(long long)a1;
- (id)writeLockNdef;
- (BOOL)writeNdefMessage:(id)a0 error:(id *)a1;

@end
