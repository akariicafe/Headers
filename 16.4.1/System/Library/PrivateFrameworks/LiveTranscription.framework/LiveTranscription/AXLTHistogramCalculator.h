@interface AXLTHistogramCalculator : NSObject

+ (id)histogramForAudioPCMBuffer:(id)a0;
+ (id)histogramForAudioQueueBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 packetCount:(long long)a1 channelsCount:(long long)a2 format:(unsigned long long)a3;
+ (id)histogramForFloat32MonoBuffer:(float *)a0 samplesCount:(long long)a1;
+ (id)histogramForInt16MonoBuffer:(short *)a0 samplesCount:(long long)a1;

@end
