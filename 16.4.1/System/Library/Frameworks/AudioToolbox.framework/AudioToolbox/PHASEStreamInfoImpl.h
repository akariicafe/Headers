@class AVAudioFormat;

@interface PHASEStreamInfoImpl : NSObject <PHASEStreamInfo>

@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) unsigned int latencyInFrames;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 latencyInFrames:(unsigned int)a1;

@end
