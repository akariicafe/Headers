@interface VCVideoQualityInfo : VCObject {
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
    unsigned long long _idsParticipantID;
}

@property (readonly, nonatomic) BOOL isVideoQualityDegraded;
@property (nonatomic) BOOL videoIsExpected;

- (void)dealloc;
- (id)initWithParticipantID:(unsigned long long)a0;
- (BOOL)updateWithLastDecodedFrameTime:(double)a0 time:(double)a1;

@end
