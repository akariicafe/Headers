@class NSMutableString, IMPingStatistics, NSMutableArray, _IMPingPacketData;

@interface _IMPingStatisticsCollector : NSObject {
    _IMPingPacketData *_timestampArray[160];
    NSMutableArray *_roundTriptimes;
    NSMutableString *_stringToWriteToFile;
    IMPingStatistics *_stats;
}

- (double)_computeMedianTime:(id)a0;
- (double)_computeStandardDeviation:(id)a0 numPings:(int)a1 averageRTT:(double)a2;
- (struct timeval { long long x0; int x1; })timeSentForPacket:(int)a0;
- (void)addEchoPacket:(int)a0 packetTimestamp:(struct timeval { long long x0; int x1; })a1 error:(int)a2;
- (void)addEchoReplyPacket:(int)a0;
- (void)timeoutOldSequenceNumbers:(double)a0;
- (BOOL)logStatsToFile:(id)a0 error:(id *)a1;
- (id)pingStatsForLastNSeconds:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)pingStats;
- (void)dealloc;

@end
