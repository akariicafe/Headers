@class NSString, NFTag;
@protocol NFReaderSessionDelegate;

@interface NFReaderSession : NFSession <NFReaderSessionCallbacks> {
    NFTag *_connectedTag;
    id<NFReaderSessionDelegate> _delegate;
}

@property id<NFReaderSessionDelegate> delegate;
@property (readonly) long long actionSheetUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (BOOL)startPolling;
- (BOOL)startPollingWithError:(id *)a0;
- (BOOL)stopPollingWithError:(id *)a0;
- (BOOL)connectTag:(id)a0 error:(id *)a1;
- (BOOL)checkNdefSupportsRead:(BOOL *)a0 andWrite:(BOOL *)a1 error:(id *)a2;
- (id)ndefReadWithError:(id *)a0;
- (BOOL)disconnectTagWithError:(id *)a0;
- (id)transceive:(id)a0;
- (BOOL)checkNdefSupportsRead:(BOOL *)a0 andWrite:(BOOL *)a1;
- (BOOL)connectTag:(id)a0;
- (BOOL)disconnectTag;
- (BOOL)checkPresence;
- (id)felicaState;
- (void).cxx_destruct;
- (void)didEndUnexpectedly;
- (id)ndefRead;
- (BOOL)stopPolling;
- (void)didTerminate:(id)a0;
- (void)didUIControllerInvalidate:(id)a0;
- (void)didDetectTags:(id)a0 connectedTagIndex:(unsigned long long)a1;
- (void)didDetectNDEFMessages:(id)a0 fromTags:(id)a1 connectedTagIndex:(unsigned long long)a2 updateUICallback:(id /* block */)a3;
- (void)didDetectExternalReaderWithNotification:(id)a0;
- (id)initWithUIType:(long long)a0;
- (BOOL)startPollingForTechnology:(unsigned int)a0 error:(id *)a1;
- (BOOL)_disconnectTagWithCardRemoval:(BOOL)a0 outError:(id *)a1;
- (BOOL)checkPresenceWithError:(id *)a0;
- (BOOL)formatNdefWithKey:(id)a0 error:(id *)a1;
- (BOOL)ndefWrite:(id)a0 error:(id *)a1;
- (id)transceive:(id)a0 error:(id *)a1;
- (id)felicaStateWithError:(id *)a0;
- (id)felicaStateForSystemCode:(id)a0 withRequestService:(id)a1 withBlockReadList:(id)a2 performSearchServiceCode:(BOOL)a3 error:(id *)a4;
- (BOOL)setECPPayload:(id)a0 error:(id *)a1;
- (BOOL)startPollingForTechnology:(unsigned int)a0;
- (BOOL)disconnectTagWithCardRemoval:(id *)a0;
- (BOOL)formatNdefWithKey:(id)a0;
- (BOOL)ndefWrite:(id)a0;
- (id)felicaStateForSystemCode:(id)a0 withRequestService:(id)a1 withBlockReadList:(id)a2 performSearchServiceCode:(BOOL)a3;
- (unsigned int)runScript:(id)a0 parameters:(id)a1 results:(id *)a2;
- (id)felicaRequestService:(id)a0 error:(id *)a1;
- (id)felicaRequestService:(id)a0 forSystemCode:(id)a1 error:(id *)a2;
- (id)updateUIAlertMessage:(id)a0;
- (id)skipMifareClassification;
- (id)performVAS:(id)a0 error:(id *)a1;

@end
