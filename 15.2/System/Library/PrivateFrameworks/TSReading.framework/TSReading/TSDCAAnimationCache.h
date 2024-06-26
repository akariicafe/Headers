@class CALayer, CAAnimation, NSDictionary;

@interface TSDCAAnimationCache : NSObject {
    NSDictionary *_overrideInitialValuesDict;
    double _animationDuration;
    long long _cacheValuesCount;
    struct CGPoint { double x0; double x1; } *_anchorPointCache;
    double *_anchorPointZCache;
    double *_borderWidthCache;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_boundsCache;
    BOOL *_doubleSidedCache;
    BOOL *_hiddenCache;
    double *_opacityCache;
    struct CGPoint { double x0; double x1; } *_positionCache;
    struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *_transformCache;
    double *_transformRotationCache;
    double *_transformRotationXCache;
    double *_transformRotationYCache;
    double *_transformRotationZCache;
    double *_transformScaleXCache;
    double *_transformScaleYCache;
    double *_transformScaleXYCache;
    struct CGPoint { double x0; double x1; } *_transformTranslationCache;
    double *_transformTranslationXCache;
    double *_transformTranslationYCache;
    double *_transformTranslationZCache;
    double *_zPositionCache;
}

@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) CAAnimation *animation;
@property (readonly, nonatomic) BOOL anchorPointAnimationExists;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } anchorPointInitialValue;
@property (readonly, nonatomic) BOOL anchorPointZAnimationExists;
@property (readonly, nonatomic) double anchorPointZInitialValue;
@property (readonly, nonatomic) BOOL borderColorAnimationExists;
@property (readonly, nonatomic) struct CGColor { } *borderColorInitialValue;
@property (readonly, nonatomic) BOOL borderWidthAnimationExists;
@property (readonly, nonatomic) double borderWidthInitialValue;
@property (readonly, nonatomic) BOOL boundsAnimationExists;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsInitialValue;
@property (readonly, nonatomic) BOOL contentsAnimationExists;
@property (readonly, nonatomic) struct CGImage { } *contentsInitialValue;
@property (readonly, nonatomic) BOOL doubleSidedAnimationExists;
@property (readonly, nonatomic) BOOL doubleSidedInitialValue;
@property (readonly, nonatomic) BOOL hiddenAnimationExists;
@property (readonly, nonatomic) BOOL hiddenInitialValue;
@property (readonly, nonatomic) BOOL opacityAnimationExists;
@property (readonly, nonatomic) double opacityInitialValue;
@property (readonly, nonatomic) BOOL positionAnimationExists;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } positionInitialValue;
@property (readonly, nonatomic) BOOL transformAnimationExists;
@property (readonly, nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transformInitialValue;
@property (readonly, nonatomic) BOOL transformRotationAnimationExists;
@property (readonly, nonatomic) double transformRotationInitialValue;
@property (readonly, nonatomic) BOOL transformRotationXAnimationExists;
@property (readonly, nonatomic) double transformRotationXInitialValue;
@property (readonly, nonatomic) BOOL transformRotationYAnimationExists;
@property (readonly, nonatomic) double transformRotationYInitialValue;
@property (readonly, nonatomic) BOOL transformRotationZAnimationExists;
@property (readonly, nonatomic) double transformRotationZInitialValue;
@property (readonly, nonatomic) BOOL transformScaleXAnimationExists;
@property (readonly, nonatomic) double transformScaleXInitialValue;
@property (readonly, nonatomic) BOOL transformScaleYAnimationExists;
@property (readonly, nonatomic) double transformScaleYInitialValue;
@property (readonly, nonatomic) BOOL transformScaleXYAnimationExists;
@property (readonly, nonatomic) double transformScaleXYInitialValue;
@property (readonly, nonatomic) BOOL transformTranslationAnimationExists;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } transformTranslationInitialValue;
@property (readonly, nonatomic) BOOL transformTranslationXAnimationExists;
@property (readonly, nonatomic) double transformTranslationXInitialValue;
@property (readonly, nonatomic) BOOL transformTranslationYAnimationExists;
@property (readonly, nonatomic) double transformTranslationYInitialValue;
@property (readonly, nonatomic) BOOL transformTranslationZAnimationExists;
@property (readonly, nonatomic) double transformTranslationZInitialValue;
@property (readonly, nonatomic) BOOL zPositionAnimationExists;
@property (readonly, nonatomic) double zPositionInitialValue;
@property (readonly, nonatomic) NSDictionary *initialValues;

- (void)dealloc;
- (double)transformRotationXCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformRotationYCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformRotationZCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformRotationCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)anchorPointZCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformScaleXYCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformScaleXCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformScaleYCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (struct CGPoint { double x0; double x1; })positionCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)zPositionCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (struct CGPoint { double x0; double x1; })transformTranslationCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformTranslationXCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformTranslationYCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)transformTranslationZCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)opacityCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (BOOL)p_setupAndCacheAnimationValues:(BOOL)a0 verifyOnly:(BOOL)a1;
- (BOOL)verifyCache;
- (id)initWithLayer:(id)a0 animation:(id)a1 overrideInitialValues:(id)a2 cacheAnimationValues:(BOOL)a3;
- (struct CGPoint { double x0; double x1; })anchorPointCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (double)borderWidthCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (BOOL)doubleSidedCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;
- (BOOL)hiddenCachedValueAtTime:(double)a0 layer:(id)a1 animation:(id)a2;

@end
