@class AVAudioFormat;

@interface PHASEExternalOutputStreamDefinition : NSObject

@property (readonly, nonatomic) long long streamType;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) unsigned int maximumFramesToRender;
@property (readonly, nonatomic) unsigned int audioSessionToken;

+ (id)new;

- (void)setFormat:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setMaximumFramesToRender:(unsigned int)a0;
- (id)initWithStreamType:(long long)a0 format:(id)a1 maximumFramesToRender:(unsigned int)a2 audioSessionToken:(unsigned int)a3;
- (id)initWithStreamType:(long long)a0 format:(id)a1 maximumFramesToRender:(unsigned int)a2;

@end
