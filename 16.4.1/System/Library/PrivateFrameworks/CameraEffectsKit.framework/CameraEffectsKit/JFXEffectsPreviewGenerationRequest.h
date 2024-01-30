@class NSArray, PVImageBuffer, JFXEffect, NSDictionary;

@interface JFXEffectsPreviewGenerationRequest : NSObject

@property (nonatomic) BOOL scaleAnimationTransformInfoToOutputSize;
@property (readonly, nonatomic) PVImageBuffer *image;
@property (readonly, nonatomic) JFXEffect *generatorEffect;
@property (readonly, nonatomic) NSArray *effectStack;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } frameSize;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } renderTime;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } userSourceTransform;
@property (copy, nonatomic) NSDictionary *customRenderingProperties;
@property (retain, nonatomic) NSArray *pickerPreviewEffectList;
@property (nonatomic) struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } animationTransformInfo;
@property (nonatomic) BOOL highQuality;
@property (nonatomic) int priority;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic) unsigned int childCode;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })JT_centerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectRatio:(double)a1;
+ (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })centerAnimationInfoForOutputSize:(struct CGSize { double x0; double x1; })a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })sourceTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })JFX_scaleToFitSize:(struct CGSize { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_scaleAndTransformToFitSize:(struct CGSize { double x0; double x1; })a0;
- (void)centerAnimationInfo;
- (id)generatorJobWithGraphBuilder:(id)a0;
- (id)initWithInput:(id)a0 effectStack:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 frameSize:(struct CGSize { double x0; double x1; })a3 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)initWithInput:(id)a0 effectStack:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)initWithInputGenerator:(id)a0 effectStack:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 frameSize:(struct CGSize { double x0; double x1; })a3 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)initWithInputGenerator:(id)a0 effectStack:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)placeholderGeneratorBackground;
- (void)setTransformAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })a0 scaleToOutput:(BOOL)a1;
- (id)sourceIGNodeUsingGraphBuilder:(id)a0 includeAnimoji:(BOOL)a1;

@end
