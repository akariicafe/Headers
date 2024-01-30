@class NSArray, JFXTextEffectTransforms;

@interface JFXTextEffectFrame : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) BOOL forcePosterFrame;
@property (nonatomic) int effectOrigin;
@property (nonatomic) struct CGSize { double width; double height; } effectSize;
@property (nonatomic) int origin;
@property (nonatomic) struct CGSize { double width; double height; } relativeToSize;
@property (nonatomic) struct PVCGPointQuad { struct CGPoint { double x; double y; } a; struct CGPoint { double x; double y; } b; struct CGPoint { double x; double y; } c; struct CGPoint { double x; double y; } d; } cornerPoints;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } objectBounds;
@property (retain, nonatomic) NSArray *hitAreaPoints;
@property (nonatomic) struct CGPath { } *hitAreaPath;
@property (nonatomic) struct CGPath { } *expandedHitAreaPath;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (retain, nonatomic) JFXTextEffectTransforms *transforms;
@property (retain, nonatomic) NSArray *textFrames;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewSpaceObjectBounds;

+ (id)frameWithEffect:(id)a0 relativeToSize:(struct CGSize { double x0; double x1; })a1 origin:(int)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 forcePosterFrame:(BOOL)a4 includeDropShadow:(BOOL)a5 includeTextFrames:(BOOL)a6;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithEffect:(id)a0 relativeToSize:(struct CGSize { double x0; double x1; })a1 origin:(int)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 forcePosterFrame:(BOOL)a4 includeDropShadow:(BOOL)a5 includeTextFrames:(BOOL)a6;

@end
