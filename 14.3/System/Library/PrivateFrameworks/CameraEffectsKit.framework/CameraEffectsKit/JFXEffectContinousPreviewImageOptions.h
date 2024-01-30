@class JTImage;

@interface JFXEffectContinousPreviewImageOptions : JFXEffectContinousPreviewOptions

@property (readonly, nonatomic) unsigned long long preferredUpdatesPerSecond;
@property (retain, nonatomic) JTImage *backgroundImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initImageOptionsWithFrameRate:(unsigned long long)a0;

@end
