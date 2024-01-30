@class NSString;

@interface CutawayClip : MovieClip

@property (retain, nonatomic) NSString *cutawayName;
@property (nonatomic) int cutawayDirection;
@property (nonatomic) BOOL startOffsetValidated;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pipRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pipRectWithAspectRatio;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) struct CGPoint { double x0; double x1; } cutawayOffset;
@property (nonatomic) struct CGPoint { double x0; double x1; } underlayOffset;
@property (readonly, nonatomic) int animateInDuration;
@property (readonly, nonatomic) int animateOutDuration;
@property (nonatomic) int cutawayType;
@property (nonatomic) int forcedDuration;
@property (nonatomic) BOOL forcedNoFadeIn;
@property (nonatomic) BOOL forcedNoFadeOut;

+ (id)cutawayWithClip:(id)a0 type:(int)a1;

- (float)scaleFactor;
- (int)startOffset;
- (int)duration;
- (double)aspectRatio;
- (void)setStartOffset:(int)a0;
- (int)clipType;
- (float)translateY;
- (float)translateX;
- (float)maxTranslateX;
- (float)clipValue:(float)a0 toMax:(float)a1;
- (float)maxTranslateY;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultPIPRect;
- (void)didFinishTrimming;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
