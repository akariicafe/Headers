@class NSString, SiriCorePingInfo, NSMutableDictionary, NSObject, SiriCoreDataCompressor, SiriCoreDataDecompressor, NSMutableArray, SiriCoreSiriConnectionInfo;
@protocol OS_dispatch_data, SiriCoreSiriBackgroundConnectionDelegate, OS_dispatch_source, OS_dispatch_queue, SiriCoreConnectionProvider;

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreConnectionProviderDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriCoreConnectionProvider> _connectionProvider;
    SiriCoreSiriConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    NSObject<OS_dispatch_data> *_bufferedProviderHeaderOutputData;
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    NSObject<OS_dispatch_data> *_bufferedUncompressedData;
    SiriCoreDataDecompressor *_inputDecompressor;
    SiriCoreDataCompressor *_outputCompressor;
    struct __CFHTTPMessage { } *_httpResponseHeader;
    BOOL _isOpened;
    BOOL _isCanceled;
    BOOL _hasReportedError;
    NSMutableDictionary *_errorsForConnectionMethods;
    NSObject<OS_dispatch_source> *_aceHeaderTimerSource;
    unsigned long long _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> *_pingTimerSource;
    unsigned int _currentPingIndex;
    SiriCorePingInfo *_pingInfo;
    unsigned long long _lastInputLength;
    void *_lastInputDataPointer;
    unsigned long long _inputLengthUnchangedCounter;
    unsigned long long _lastOutputLength;
    void *_lastOutputDataPointer;
    unsigned long long _outputLengthUnchangedCounter;
    unsigned int _currentBarrierIndex;
    NSMutableDictionary *_outstandingBarriers;
    long long _connectionMethod;
    NSObject<OS_dispatch_data> *_safetyNetBuffer;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    double _firstStartTime;
    double _currentStartTime;
    double _currentOpenTime;
    double _firstByteReadTime;
    unsigned long long _startCount;
    unsigned long long _metricsCount;
    NSMutableArray *_outgoingCommandsWithSendCompletions;
    BOOL _primaryConnectionViable;
    BOOL _betterPathAvailable;
    long long _secondaryConnectionOpenState;
    id<SiriCoreConnectionProvider> _secondaryConnectionProvider;
    BOOL _dispatchedSnapshotMetrics;
}

@property (weak, nonatomic) id<SiriCoreSiriBackgroundConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (retain, nonatomic) Class peerProviderClass;
@property (nonatomic) BOOL usesProxyConnection;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) BOOL siriConnectionUsesPeerManagedSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (BOOL)_usingNetwork;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)_closeConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)probeConnection;
- (id)_connectionType;
- (void)barrier:(id /* block */)a0;
- (id)analysisInfo;
- (void)connectionProvider:(id)a0 receivedError:(id)a1;
- (void)startHeartBeat;
- (void)stopHeartBeat;
- (void)_startWithConnectionInfo:(id)a0 proposedFallbackMethod:(long long)a1 allowFallbackToNewMethod:(BOOL)a2;
- (long long)_nextConnectionMethod;
- (Class)_providerClass;
- (BOOL)_usingPOP;
- (void)_startNetworkProviderWithInfo:(id)a0;
- (BOOL)_usingPeer;
- (id)_httpHeaderData;
- (id)_aceHeaderData;
- (void)_prepareProviderHeaderWithForceReconnect:(BOOL)a0;
- (void)_initializeBufferedGeneralOutputDataWithInitialPayload:(BOOL)a0;
- (id)_getInitialPayloadWithBufferedLength:(unsigned long long *)a0 forceReconnect:(BOOL)a1;
- (void)_didEncounterError:(id)a0;
- (void)_fallBackToNextConnectionMethodWithError:(id)a0 orElse:(id /* block */)a1;
- (void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)a0;
- (void)_updateBuffersForInitialPayload:(id)a0 bufferedLength:(unsigned long long)a1 forceReconnect:(BOOL)a2;
- (void)_setupReadHandlerOnProvider;
- (void)_networkProviderDidOpen;
- (void)_closeConnectionAndPrepareForReconnect:(BOOL)a0;
- (void)_cancelSecondaryConnection;
- (void)_forceTriggerRetry;
- (id)_headerDataForURL:(id)a0 aceHost:(id)a1 languageCode:(id)a2 syncAssistantId:(id)a3;
- (void)_bufferGeneralData:(id)a0;
- (void)_cancelOutstandingBarriers;
- (id)_bestErrorBetweenError:(id)a0 peerError:(id)a1;
- (BOOL)_shouldTrySameConnectionMethodForMethod:(long long)a0 error:(id)a1;
- (BOOL)_canFallBackFromError:(id)a0;
- (void)_fallBackToNextConnectionMethod:(long long)a0 fromError:(id)a1 afterDelay:(double)a2;
- (long long)_normalizeSNR:(long long)a0;
- (BOOL)_tcpInfoIndicatesPoorLinkQuality;
- (void)_aceHeaderTimeoutFired:(id)a0 afterTimeout:(double)a1;
- (BOOL)_hasReadACEHeader;
- (BOOL)_usingFlorence;
- (BOOL)_wifiOrCellularMayBeBetterThanCurrentStream;
- (void)_pingTimerFired;
- (void)_resumePingTimer;
- (long long)_checkForProgressOnReadingData;
- (long long)_checkPings;
- (BOOL)_hasReadHTTPHeader;
- (BOOL)_sendAcePingWithId:(unsigned int)a0 error:(id *)a1;
- (BOOL)_hasBufferedDataOrOutstandingPings;
- (void)_startSecondaryConnection;
- (BOOL)_tryReadingHTTPHeaderData:(id)a0 withMessage:(struct __CFHTTPMessage { } *)a1 bytesRead:(unsigned long long *)a2 error:(id *)a3;
- (id)_tryReadingAceHeaderFromData:(id)a0 bytesParsed:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_tryReadingParsedDataFromBytes:(const void *)a0 length:(unsigned long long)a1 packet:(struct { unsigned char x0; unsigned int x1; } *)a2 object:(id *)a3 bytesParsed:(unsigned long long *)a4 error:(id *)a5;
- (void)_handleAceObject:(id)a0;
- (void)_handlePacket:(struct { unsigned char x0; unsigned int x1; } *)a0;
- (BOOL)_consumeHTTPHeaderWithData:(id)a0 bytesRead:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_consumeAceHeaderWithData:(id)a0 bytesRead:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_consumeAceDataWithData:(id)a0 bytesRead:(unsigned long long *)a1 error:(id *)a2;
- (void)_tryToWriteBufferedOutputData;
- (void)_sendGeneralData:(id)a0;
- (void)sendCommand:(id)a0 moreComing:(BOOL)a1 errorHandler:(id /* block */)a2;
- (void)_connectionHasBytesAvailable:(id)a0;
- (BOOL)_tryParsingHTTPHeaderData:(id)a0 partialMessage:(struct __CFHTTPMessage { } *)a1 statusCode:(long long *)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;
- (void)_handleAceNop;
- (void)_handleAcePing:(unsigned int)a0;
- (void)_handleAcePong:(unsigned int)a0;
- (void)_handleAceEnd;
- (BOOL)_sendAcePongWithId:(unsigned int)a0 error:(id *)a1;
- (void)_handleBarrierReply:(unsigned int)a0;
- (id)_connectionMethodDescription;
- (void)_getWifiMetrics:(id)a0;
- (void)_getCellularMetrics:(id)a0;
- (void)connectionProvider:(id)a0 receivedViabilityChangeNotification:(BOOL)a1;
- (void)connectionProviderReceivedBetterRouteNotification:(id)a0;
- (BOOL)_usingPOPOnPeer;
- (void)startWithConnectionInfo:(id)a0;
- (void)_setNetworkProvider:(id)a0;
- (void)updateActiveBackgroundConnectionWithSecondary;
- (void)setSendPings:(BOOL)a0;
- (void)_cancelForExtendedValidationFailureWithTrustInfo:(id)a0;
- (void)sendCommands:(id)a0 errorHandler:(id /* block */)a1;
- (id)getConnectionMethodUsed;
- (void)getConnectionMetrics:(id)a0 withCompletion:(id /* block */)a1;

@end
