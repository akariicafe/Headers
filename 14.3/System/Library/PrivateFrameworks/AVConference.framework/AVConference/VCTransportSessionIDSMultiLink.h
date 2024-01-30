@class NSString, VCIDSSessionInfoSynchronizer;

@interface VCTransportSessionIDSMultiLink : VCTransportSessionIDS <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate> {
    BOOL _isWiFiAssistActive;
}

@property (readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onStop;
- (void)setWiFiAssist:(BOOL)a0;
- (void)startActiveProbingWithOptions:(id)a0;
- (void)stopActiveProbingWithOptions:(id)a0;
- (void)flushLinkProbingStatusWithOptions:(id)a0;
- (int)onStart;
- (void)queryProbingResultsWithOptions:(id)a0;
- (id)initWithCallID:(unsigned int)a0 reportingAgent:(id)a1;
- (void)connectionCallback:(id)a0 isInitialConnection:(BOOL)a1;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (void)handleSessionInfoResponse:(id)a0;
- (void)handleProbingResponse:(id)a0;
- (void)setQuickRelayServerProvider:(int)a0;
- (void)didEnableDuplication:(BOOL)a0 activeConnection:(id)a1;
- (void)primaryConnectionChanged:(id)a0 oldPrimaryConnection:(id)a1 activeConnection:(id)a2;
- (void)discardConnection:(id)a0;
- (void)updateParticipantGenerationCounter:(unsigned char)a0;
- (void)resetParticipantGenerationCounter;
- (void)optOutAllStreamsForConnection:(id)a0;
- (id)initWithCallID:(unsigned int)a0 requireEncryptionInfo:(BOOL)a1 reportingAgent:(id)a2 notificationQueue:(id)a3 isMultiwaySession:(BOOL)a4;
- (void)VCIDSSessionInfoSynchronizer:(void *)a0 sendVCIDSSessionInfoRequest:(id)a1;
- (void)setDefaultLink:(id)a0;

@end
