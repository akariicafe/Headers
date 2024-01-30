@interface AVAudioOutputNode : AVAudioIONode

- (id)manualRenderingFormat;
- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;
- (unsigned int)manualRenderingMaximumFrameCount;

@end
