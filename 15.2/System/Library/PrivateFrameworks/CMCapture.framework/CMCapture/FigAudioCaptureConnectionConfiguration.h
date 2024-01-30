@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL builtInMicrophoneStereoAudioCaptureEnabled;
@property (nonatomic) int builtInMicrophonePosition;
@property (nonatomic) double builtInMicrophoneRequiredSampleRate;

- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
