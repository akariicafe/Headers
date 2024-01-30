@class VCRateControlMediaController;

@interface VCBasebandMetrics : NSObject {
    struct { int type; unsigned short version; double arrivalTime; union { struct { unsigned short radioTechnology; unsigned char transmissionAntenna; unsigned short numberOfFlows; unsigned char flowType; char transmissionPower; unsigned int queueDepth1; unsigned int queueDepth2; unsigned int basebandTransmissionBytes; unsigned int lastTransmissionTimestamp; } report; struct { unsigned short transactionID; unsigned short totalNumDropped; unsigned short numberOfPayloadTypes; struct { unsigned char payloadType; unsigned short numberOfPacketDropped; unsigned short awDroppedSN[500]; } PTSpecific[6]; } dropAck; struct { unsigned short currentBitrate; unsigned short suggestedBitrate; } codecRateChange; } notes; } _lastBasebandNotification;
    double _bdcd;
    double _normalizedBDCD;
    double _normalizedDelay;
    BOOL _isBDCDListReady;
    BOOL _useAverageQueueDepthForDelay;
    struct { double time[15]; double bdcd[15]; double delay[15]; int frontIndex; int rearIndex; unsigned int size; } _bdcdList;
    struct { double time[15]; unsigned int transmittedBytes[15]; unsigned int nonFlushableQueueDepth[15]; int frontIndex; int rearIndex; unsigned int size; } _infoList;
    unsigned int _txBitrate;
    unsigned int _averageBitrate;
    unsigned int _previousAverageBitrate;
    unsigned int _averageBitrateShort;
    unsigned int _averageBitrateLong;
    double _averageQueueDepth;
    double _expectedQueuingDelay;
    double _expectedQueuingDelayLong;
    double _averageBitrateMovingAverageFactor;
    BOOL _resetAverageBitrateLong;
    void *_logBasebandDump;
}

@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) BOOL isTargetBitrateStabilized;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;

- (id)init;
- (void)dealloc;
- (void)enableBasebandLogDump:(void *)a0;
- (void)addInfoListWithNotification:(struct { int x0; unsigned short x1; double x2; union { struct { unsigned short x0; unsigned char x1; unsigned short x2; unsigned char x3; char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct { unsigned short x0; unsigned short x1; unsigned short x2; struct { unsigned char x0; unsigned short x1; unsigned short x2[500]; } x3[6]; } x1; struct { unsigned short x0; unsigned short x1; } x2; } x3; } *)a0;
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)a0;
- (void)normalizeBDCD:(double)a0;
- (double)updateTotalQueueDepth:(unsigned int)a0;
- (void)addBDCDListWithNotificationArrivalTime:(double)a0 bdcd:(double)a1 queuingDelay:(double)a2;
- (void)resetBDCDList;
- (struct { int x0; int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; double x10; char x11[64]; int x12; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x9; struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; int x9; unsigned int x10; unsigned char x11; unsigned char x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; float x21; BOOL x22; } x10; } x7; })getBasebandMetricsWithNotification:(struct { int x0; unsigned short x1; double x2; union { struct { unsigned short x0; unsigned char x1; unsigned short x2; unsigned char x3; char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct { unsigned short x0; unsigned short x1; unsigned short x2; struct { unsigned char x0; unsigned short x1; unsigned short x2[500]; } x3[6]; } x1; struct { unsigned short x0; unsigned short x1; } x2; } x3; } *)a0;
- (void)resetBBNoteHistoryList;

@end
