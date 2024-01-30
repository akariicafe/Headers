@class NSHashTable, NSString, ATSignatureProvider, NSMutableDictionary, ATMessageParser, NSMutableSet, NSObject, ATSocket, NSMapTable;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface ATConcreteMessageLink : ATMessageLink <ATSocketDelegate> {
    ATMessageParser *_parser;
    NSMapTable *_outputStreamsToInputStreams;
    NSMutableDictionary *_sentRequestsByID;
    NSMutableDictionary *_receivedRequestsByID;
    NSMutableDictionary *_receivedResponsesByID;
    NSMutableDictionary *_completionHandlersByRequestID;
    NSMutableDictionary *_completionHandlersByResponseID;
    NSMutableDictionary *_requestWritersByID;
    NSMutableDictionary *_responseWritersByID;
    NSMutableDictionary *_streamReadersByID;
    NSMutableSet *_requestWritersPendingStopByID;
    NSMutableSet *_responseWritersPendingStopByID;
    NSMutableSet *_requestReadersPendingStopByID;
    NSMutableDictionary *_requestHandlersByDataClass;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_handlerAccessQueue;
    NSObject<OS_dispatch_group> *_stopReadersAndWritersGroup;
    BOOL _open;
    long long _idleTimeoutExceptionCount;
    long long _keepAliveExceptionCount;
    unsigned int _nextMessageID;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, getter=isInitialized) BOOL initialized;
@property (nonatomic) int endpointType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double lastActivityTime;
@property (readonly, nonatomic) ATSocket *socket;
@property (readonly, copy, nonatomic) NSString *guid;
@property (retain, nonatomic) ATSignatureProvider *signatureProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isOpen;
- (void)addObserver:(id)a0;
- (BOOL)open;
- (void)socket:(id)a0 hasDataAvailable:(const char *)a1 length:(long long)a2;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)close;
- (void)socketDidClose:(id)a0;
- (id)initWithSocket:(id)a0;
- (void).cxx_destruct;
- (BOOL)_sendMessage:(id)a0 error:(id *)a1;
- (unsigned int)_nextRequestID;
- (BOOL)idleTimeoutEnabled;
- (id)_getObservers;
- (void)addRequestHandler:(id)a0 forDataClass:(id)a1;
- (void)_checkMessageTimeouts;
- (void)addKeepAliveException;
- (void)addTimeoutException;
- (void)removeKeepAliveException;
- (void)removeTimeoutException;
- (void)sendRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendResponse:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_invokeCompletionHandlerForResponseID:(unsigned long long)a0 withError:(id)a1;
- (BOOL)_isWriterPendingStopForforMessage:(id)a0;
- (void)_prepareStreamReaderForMessage:(id)a0 withProgress:(id /* block */)a1;
- (void)_processIncomingDataRequest:(id)a0;
- (void)_processIncomingDataResponse:(id)a0;
- (void)_processIncomingMessage:(id)a0;
- (void)_processIncomingPartialResponse:(id)a0;
- (void)_processIncomingRequest:(id)a0;
- (void)_processIncomingResponse:(id)a0;
- (void)_stopWriter:(id)a0 byInjectingStreamError:(struct { long long x0; int x1; } *)a1 forMessageId:(unsigned int)a2 type:(int)a3;
- (void)removeRequestHandlerForDataClass:(id)a0;
- (void)sendPartialResponse:(id)a0 withCompletion:(id /* block */)a1;

@end
