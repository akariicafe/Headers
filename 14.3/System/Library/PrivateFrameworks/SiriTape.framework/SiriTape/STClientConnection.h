@class STMockSessionDJ, NSString, SiriCoreDataCompressor, NSURL, NSObject;
@protocol OS_dispatch_data;

@interface STClientConnection : STProxyConnection <STMockSessionDJDelegate> {
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    SiriCoreDataCompressor *_outputCompressor;
    double _lastReplayEvent;
    NSURL *_replayFileURL;
    STMockSessionDJ *_sessionDJ;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_initializeBufferedGeneralOutputDataWithInitialPayload:(BOOL)a0;
- (void)_bufferGeneralData:(id)a0;
- (BOOL)_hasBufferedDataOrOutstandingPings;
- (void)_tryToWriteBufferedOutputData;
- (void)_sendGeneralData:(id)a0;
- (void)_handleAceNop;
- (void)_handleAcePing:(unsigned int)a0;
- (void)_handleAcePong:(unsigned int)a0;
- (void)_handleAceEnd;
- (BOOL)_sendAcePongWithId:(unsigned int)a0 error:(id *)a1;
- (id)initWithSocket:(id)a0 handler:(id)a1 replayFileURL:(id)a2;
- (void)handleAceObject:(id)a0;
- (void)handlePacket:(struct { unsigned char x0; unsigned int x1; } *)a0;
- (void)_handleLoadAssistant:(id)a0;
- (void)_addStartRequestIDToReplay:(id)a0;
- (void)_startReplayWithAceID:(id)a0 atURL:(id)a1;
- (BOOL)_sendAceCommand:(id)a0 error:(id *)a1;
- (void)_checkForReplayTimeout;
- (BOOL)_sendAceEndWithError:(id *)a0;
- (void)sessionDJ:(id)a0 replayAceCommand:(id)a1;
- (void)sessionDJReplayDidFinish:(id)a0;

@end
