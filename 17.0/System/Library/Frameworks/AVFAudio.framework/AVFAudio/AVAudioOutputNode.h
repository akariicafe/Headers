@interface AVAudioOutputNode : AVAudioIONode

- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;
- (id)manualRenderingFormat;
- (unsigned int)manualRenderingMaximumFrameCount;

@end
