@class AVAudioFormat, NSDictionary;

@interface PHASEStreamInfoImpl : NSObject <PHASEStreamInfo>

@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) unsigned int latencyInFrames;
@property (readonly, nonatomic) NSDictionary *streamDescription;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 latencyInFrames:(unsigned int)a1;
- (id)initWithFormat:(id)a0 latencyInFrames:(unsigned int)a1 streamDescription:(id)a2;

@end
