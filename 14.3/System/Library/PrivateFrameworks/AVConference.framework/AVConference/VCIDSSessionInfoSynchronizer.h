@class NSObject, NSMutableDictionary, VCConnectionManager, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCIDSSessionInfoSynchronizer : NSObject {
    NSMutableArray *_peerSubscribedStreams;
    NSMutableDictionary *_peerPublishedStreams;
    NSMutableArray *_publishedStreams;
    NSMutableDictionary *_subscribedStreams;
    id _delegate;
    unsigned int _currentParticipantGenerationCounter;
    NSNumber *_primaryLinkID;
    NSNumber *_duplicationLinkID;
    VCConnectionManager *_connectionManager;
    id _reportingAgentWeak;
    BOOL _isSessionInfoErrorResponseReported;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _sessionInfoRequestBytesUsed;
    int _sessionInfoResponseBytesUsed;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
}

@property (retain, nonatomic) NSNumber *primaryLinkID;
@property (retain, nonatomic) NSNumber *duplicationLinkID;
@property (copy, nonatomic) id /* block */ peerSubscribedStreamCallback;
@property (copy, nonatomic) id /* block */ peerPublishedStreamCallback;
@property (copy, nonatomic) id /* block */ errorReponseCallback;
@property (readonly) id reportingAgent;

- (void)dealloc;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (void)periodicTask:(void *)a0;
- (void)resetParticipantGenerationCounter;
- (void)setVCIDSSessionInfoSubscribedStreamIDs:(id)a0;
- (void)setErrorResponseCallback:(id /* block */)a0;
- (void)flushRealTimeReportingStats;
- (id)sessionInfoSynchronizerDelegate;
- (void)setVCIDSSessionInfoPublishedStreamIDs:(id)a0;
- (void)optInStreamIDsForConnection:(id)a0;
- (void)optOutStreamIDsForNonPrimaryConnection:(id)a0 sentOnConnection:(id)a1;
- (id)initWithDelegate:(id)a0 connectionManager:(id)a1 reportingAgent:(id)a2;
- (void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)a0;
- (void)updateVCIDSSessionInfoResponse:(id)a0;
- (void)optInStreamIDsForNewPrimaryConnection:(id)a0 oldPrimaryConnection:(id)a1;

@end
