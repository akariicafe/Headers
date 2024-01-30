@interface MRAudioFadeResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) long long fadeDuration;

- (id)initWithFadeDuration:(long long)a0 error:(id)a1;
- (unsigned long long)type;

@end
