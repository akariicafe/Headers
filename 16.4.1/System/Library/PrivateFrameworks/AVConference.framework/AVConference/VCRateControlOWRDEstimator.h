@interface VCRateControlOWRDEstimator : NSObject {
    BOOL _useUINT16;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    unsigned long long _sendTimestampWrappedAround;
    double _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    unsigned long long _receiveTimestampWrappedAround;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    unsigned int _abnormalOWRDSampleCount;
    BOOL _sendTimestampSpikeDetected;
    BOOL _receiveTimestampSpikeDetected;
    double _averageSendInterval;
    double _averageReceiveInterval;
}

@property (readonly, nonatomic) double owrd;
@property (nonatomic) unsigned int mode;

- (void)calculateOWRDWithSendTime:(double)a0 receiveTime:(double)a1 roundTripTime:(double)a2;
- (BOOL)detectAbnormalOWRDWithRoundTripTime:(double)a0;
- (BOOL)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned int)a0;
- (BOOL)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned int)a0;
- (double)relativeReceiveTimeWithTimestamp:(unsigned int)a0 timestampRate:(unsigned int)a1;
- (double)relativeSendTimeWithTimestamp:(unsigned int)a0 timestampRate:(unsigned int)a1;
- (void)resetOWRDEstimation;

@end
