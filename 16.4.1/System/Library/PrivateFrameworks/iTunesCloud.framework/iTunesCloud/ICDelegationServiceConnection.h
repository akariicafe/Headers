@class ICDelegationServiceSecuritySettings, NSString, ICDelegationServicePairingSession, NSMutableDictionary, MSVMessageParser, NSObject, MSVStreamReader, MSVStreamWriter;
@protocol OS_dispatch_queue, ICDelegationServiceConnectionDelegate;

@interface ICDelegationServiceConnection : NSObject <ICDelegationServicePairingSessionDelegate, MSVMessageParserDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    id<ICDelegationServiceConnectionDelegate> _delegate;
    BOOL _isPaired;
    BOOL _isStarted;
    MSVMessageParser *_messageParser;
    unsigned int _nextRequestID;
    ICDelegationServicePairingSession *_pairingSession;
    NSMutableDictionary *_pendingRequestIDToRequestContext;
    MSVStreamReader *_streamReader;
    NSObject<OS_dispatch_queue> *_streamReaderQueue;
    MSVStreamWriter *_streamWriter;
    NSObject<OS_dispatch_queue> *_streamWriterQueue;
}

@property (weak, nonatomic) id<ICDelegationServiceConnectionDelegate> delegate;
@property (readonly, nonatomic) long long connectionRole;
@property (readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)parser:(id)a0 didParseMessage:(id)a1;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_streamDidClose;
- (void)delegationServicePairingSession:(id)a0 sendData:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_finishPendingRequestsWithError:(id)a0;
- (unsigned int)_nextRequestUniqueID;
- (void)_sendMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_sendResponse:(id)a0 forRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_streamDidParseMessage:(id)a0;
- (void)_streamEncounteredError:(id)a0;
- (id)initWithConnectionRole:(long long)a0 inputStream:(id)a1 outputStream:(id)a2 securitySettings:(id)a3;
- (void)sendResponse:(id)a0 forRequest:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
