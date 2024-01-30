@class JTImage;

@interface JFXEffectContinousPreviewImageOptions : JFXEffectContinousPreviewOptions

@property (readonly, nonatomic) unsigned long long preferredUpdatesPerSecond;
@property (retain, nonatomic) JTImage *backgroundImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initImageOptionsWithFrameRate:(unsigned long long)a0;

@end
