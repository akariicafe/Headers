@class MRAudioBuffer;

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (retain, nonatomic) MRAudioBuffer *buffer;
@property (nonatomic) struct { double x0; double x1; } time;
@property (nonatomic) float gain;

- (void)setTime:(struct { double x0; double x1; })a0;
- (void)setBuffer:(id)a0;
- (void)setGain:(float)a0;

@end
