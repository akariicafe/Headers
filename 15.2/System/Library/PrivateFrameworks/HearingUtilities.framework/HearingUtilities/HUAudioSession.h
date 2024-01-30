@interface HUAudioSession : AVAudioSession

@property (nonatomic) unsigned long long currentFeature;

- (void)setActive:(BOOL)a0 forFeature:(unsigned long long)a1 error:(id *)a2;

@end
