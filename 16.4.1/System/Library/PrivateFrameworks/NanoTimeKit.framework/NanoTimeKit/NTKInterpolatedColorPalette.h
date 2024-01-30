@class NTKFaceColorPalette, NSCache;

@interface NTKInterpolatedColorPalette : NSObject {
    NSCache *_cache;
}

@property (nonatomic) double transitionFraction;
@property (copy, nonatomic) NTKFaceColorPalette *fromPalette;
@property (copy, nonatomic) NTKFaceColorPalette *toPalette;
@property (nonatomic) id /* block */ colorInterpolator;
@property (nonatomic) id /* block */ floatInterpolator;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)valueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithColorPalette:(id)a0;
- (id)initWithFromPalette:(id)a0 toPalette:(id)a1;
- (id)interpolatedColorFromSelector:(SEL)a0 parameter:(id)a1;

@end
