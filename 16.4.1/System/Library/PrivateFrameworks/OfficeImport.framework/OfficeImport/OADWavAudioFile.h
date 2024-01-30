@interface OADWavAudioFile : OADEmbeddedMediaFile

@property (nonatomic) float duration;
@property (nonatomic) BOOL hasDuration;

- (BOOL)isAudioOnly;
- (void)setIsAudioOnly:(BOOL)a0;

@end
