@interface VCAudioUnitSpatialContext : NSObject {
    struct OpaqueCMBlockBuffer { } *_spatialMetadata;
}

@property (nonatomic) unsigned int audioSessionId;
@property (nonatomic) unsigned int maxChannelCountMic;
@property (nonatomic) unsigned int maxChannelCountSpeaker;
@property (nonatomic) struct OpaqueCMBlockBuffer { } *spatialMetadata;

- (void)dealloc;
- (id)initWithAudioSessionId:(unsigned int)a0 maxChannelCountMic:(unsigned int)a1 maxChannelCountSpeaker:(unsigned int)a2 spatialMetadata:(struct OpaqueCMBlockBuffer { } *)a3;

@end
