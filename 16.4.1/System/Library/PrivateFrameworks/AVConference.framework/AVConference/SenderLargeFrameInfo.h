@interface SenderLargeFrameInfo : NSObject {
    double probingInterval;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastProbingSequenceTimeExpect;
@property (nonatomic) double lastProbingSequenceTimeActual;
@property (nonatomic) unsigned int largeFrameSizeRequested;
@property (nonatomic) unsigned int largeFrameSizeAtCurrentBandwidth;
@property (nonatomic) unsigned int probingSequencePacketSize;
@property (nonatomic) unsigned int probingSequencePacketCount;
@property (nonatomic) int probingSequenceCount;
@property (nonatomic) int totalLargeFrameWaste;
@property (nonatomic) BOOL isLastFrameProbingSequence;
@property (nonatomic) BOOL isLargeFrameRequestDisabled;

@end
