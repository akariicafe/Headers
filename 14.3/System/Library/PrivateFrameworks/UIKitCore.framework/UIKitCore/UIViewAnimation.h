@class NSIndexPath, UIView;

@interface UIViewAnimation : NSObject

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) int viewType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property (readonly, nonatomic) double endAlpha;
@property (readonly, nonatomic) double startFraction;
@property (readonly, nonatomic) double endFraction;
@property (readonly, nonatomic) int curve;
@property (readonly, nonatomic) BOOL animateFromCurrentPosition;
@property (readonly, nonatomic) BOOL shouldDeleteAfterAnimation;
@property (readonly, nonatomic) BOOL editing;
@property (nonatomic) BOOL shouldAnimateShadow;
@property (nonatomic) BOOL shouldResetGroupOpacityAfterAnimation;
@property (nonatomic) BOOL shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic) BOOL shouldClipToBoundsAfterAnimation;

- (void).cxx_destruct;
- (id)description;
- (id)initWithView:(id)a0 indexPath:(id)a1 viewType:(int)a2 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 endAlpha:(double)a4 startFraction:(double)a5 endFraction:(double)a6 curve:(int)a7 animateFromCurrentPosition:(BOOL)a8 shouldDeleteAfterAnimation:(BOOL)a9 editing:(BOOL)a10;

@end
