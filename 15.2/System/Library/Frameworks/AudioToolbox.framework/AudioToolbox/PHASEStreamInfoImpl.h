@class AVAudioFormat;

@interface PHASEStreamInfoImpl : NSObject <PHASEStreamInfo>

@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) unsigned int latencyInFrames;

- (id)initWithFormat:(id)a0 latencyInFrames:(unsigned int)a1;
- (void).cxx_destruct;

@end
