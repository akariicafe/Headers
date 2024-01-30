@interface SVPlayer : AVPlayer

@property (readonly, nonatomic) int audioMode;

- (void)dealloc;
- (id)initWithAudioMode:(int)a0;

@end
