@interface VCStatisticsHistory : NSObject {
    struct VCStatisticsStatsHistoryElement { unsigned char linkID; double statsUpdateTime; unsigned int statsTimestamp; unsigned int totalPacketSent; unsigned int totalPacketReceived; unsigned long long totalByteSent; unsigned long long totalByteReceived; unsigned long long totalByteServerStatsUsed; unsigned int maxBurstyLoss; } _statsHistory[500];
    int _statsHistorySize;
    int _currentStatsHistoryIndex;
    struct VCStatisticsStatsHistoryElement { unsigned char linkID; double statsUpdateTime; unsigned int statsTimestamp; unsigned int totalPacketSent; unsigned int totalPacketReceived; unsigned long long totalByteSent; unsigned long long totalByteReceived; unsigned long long totalByteServerStatsUsed; unsigned int maxBurstyLoss; } _lastStats;
    unsigned char _currentLinkID;
    double _lastHistoryNotEnoughLogTime;
    struct VCStatisticsSendHistoryElement { unsigned int x0; double x1; unsigned int x2; unsigned long long x3; struct VCStatisticsSendHistoryElement *x4; struct VCStatisticsSendHistoryElement *x5; } *_sendHistory;
}

- (void)dealloc;
- (void)addStatsHistory:(struct VCStatisticsStatsHistoryElement { unsigned char x0; double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; })a0;
- (void)addAndPruneSendHistory:(struct VCStatisticsSendHistoryElement { unsigned int x0; double x1; unsigned int x2; unsigned long long x3; struct VCStatisticsSendHistoryElement *x4; struct VCStatisticsSendHistoryElement *x5; } *)a0 upToTime:(double)a1;
- (struct VCStatisticsSendHistoryElement { unsigned int x0; double x1; unsigned int x2; unsigned long long x3; struct VCStatisticsSendHistoryElement *x4; struct VCStatisticsSendHistoryElement *x5; } *)getSendHistoryElementWithPacketId:(unsigned int)a0;
- (double)getPacketLossRateAtTime:(double)a0 inMostRecentDuration:(double)a1;
- (double)getReceivingBitrateAtTime:(double)a0 inMostRecentDuration:(double)a1;
- (double)getSendingBitrateAtTime:(double)a0 inMostRecentDuration:(double)a1;
- (double)getServerStatsBitrateAtTime:(double)a0 inMostRecentDuration:(double)a1;
- (double)getRoundTripTimeWithPacketId:(unsigned int)a0 time:(double)a1;
- (int)getBurstyLossAtTime:(double)a0 inMostRecentDuration:(double)a1 withPercentile:(double)a2;
- (void)clearSendHistory;
- (void)resetHistory;
- (BOOL)isStatsElementOutOfOrder:(struct VCStatisticsStatsHistoryElement { unsigned char x0; double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; })a0;
- (BOOL)handleWrappedAroundByteCountForStats:(struct VCStatisticsStatsHistoryElement { unsigned char x0; double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; } *)a0;
- (BOOL)getStatsHistoryElementIndex:(int *)a0 time:(double)a1 inMostRecentDuration:(double)a2;

@end
