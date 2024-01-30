@interface OKActionMicrophoneNoise : OKAction <NSSecureCoding, OKActionMicrophoneNoiseExports>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float meanAudioLevel;

+ (id)microphoneNoiseActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 meanAudioLevel:(float)a3 context:(id)a4;
+ (id)microphoneNoiseActionWithState:(unsigned long long)a0 meanAudioLevel:(float)a1 context:(id)a2;
+ (void)setupJavascriptContext:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
