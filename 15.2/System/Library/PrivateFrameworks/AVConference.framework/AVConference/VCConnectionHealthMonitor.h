@class NSObject;
@protocol OS_dispatch_queue;

@interface VCConnectionHealthMonitor : NSObject {
    unsigned char _lastReportedIndex;
    struct ConnectionStatsHistory { unsigned char latestConnectionStatsIndex; unsigned char totalPacketsReceived[5]; unsigned char connectionStats[2][5]; unsigned char connectionStatsRatio[2][5]; } _statsHistory;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _peerStateRWLock;
    struct ConnectionStatsHistory { unsigned char latestConnectionStatsIndex; unsigned char totalPacketsReceived[5]; unsigned char connectionStats[2][5]; unsigned char connectionStatsRatio[2][5]; } _peerStatsHistory;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _stateRWLock;
    struct ConnectionStats { unsigned char totalPacketsReceived; unsigned char connectionStats[2]; unsigned char currentIndex; double startTime; } _currentReceivingStats;
    struct ConnectionStats { unsigned char totalPacketsReceived; unsigned char connectionStats[2]; unsigned char currentIndex; double startTime; } _tempReceivingStats;
    BOOL _firstPacketReceived;
    struct ConnectionStatsSequenceNumberData { unsigned short seqNumber; double receivedTimestamp; } _secondaryConnReceivedSequenceNumberStats[1024];
}

@property id delegate;
@property double primaryConnHealthAllowedDelay;
@property BOOL usingServerBasedLinks;

- (id)init;
- (void)dealloc;
- (unsigned int)generateStatsBlob;
- (void)updateReceiveStats;
- (void)processPeerStatsBlob:(unsigned int)a0;
- (void)resetConnectionStats:(BOOL)a0;
- (void)updateStatsHistory;
- (void)updateRatiosForHistory:(struct ConnectionStatsHistory { unsigned char x0; unsigned char x1[5]; unsigned char x2[2][5]; unsigned char x3[2][5]; } *)a0 withIndex:(int)a1;
- (void)reportConnectionHealthWithStatsHistory:(struct ConnectionStatsHistory { unsigned char x0; unsigned char x1[5]; unsigned char x2[2][5]; unsigned char x3[2][5]; } *)a0 index:(int)a1 isPeerStats:(BOOL)a2;
- (void)resetHistory:(struct ConnectionStatsHistory { unsigned char x0; unsigned char x1[5]; unsigned char x2[2][5]; unsigned char x3[2][5]; } *)a0;
- (BOOL)isPrimaryConnectionImprovedFromHistory:(struct ConnectionStatsHistory { unsigned char x0; unsigned char x1[5]; unsigned char x2[2][5]; unsigned char x3[2][5]; } *)a0 withIndex:(int)a1 remoteStatsHistory:(struct ConnectionStatsHistory { unsigned char x0; unsigned char x1[5]; unsigned char x2[2][5]; unsigned char x3[2][5]; } *)a2;
- (BOOL)isHistoryImproved:(char *)a0 currentIndex:(int)a1;
- (BOOL)isHistoryValid:(char *)a0;

@end
