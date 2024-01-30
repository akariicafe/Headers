@class MPMusicPlayerPlayParametersQueueDescriptor, MusicKit_SoftLinking_MPMusicPlayerPlayParameters;

@interface MusicKit_SoftLinking_MPMusicPlayerPlayParametersQueueDescriptor : NSObject {
    MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;
}

@property (readonly, nonatomic) MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;
@property (retain, nonatomic) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *startItemPlayParameters;

- (void).cxx_destruct;
- (id)initWithPlayParametersQueue:(id)a0;
- (void)setStartTime:(double)a0 forItemWithPlayParameters:(id)a1;
- (void)setEndTime:(double)a0 forItemWithPlayParameters:(id)a1;

@end
