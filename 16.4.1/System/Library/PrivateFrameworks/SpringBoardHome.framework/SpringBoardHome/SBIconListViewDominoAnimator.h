@class NSString;

@interface SBIconListViewDominoAnimator : NSObject <SBIconListLayoutAnimating> {
    double _delay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconListView:(id)a0 wantsAnimatedRemovalForIconViews:(id)a1 completionHandler:(id /* block */)a2;
- (void)iconListView:(id)a0 wantsAnimatedLayoutForIconView:(id)a1 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x0; double x1; } x0; double x1; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x2; BOOL x3; struct SBIconCoordinate { long long x0; long long x1; } x4; BOOL x5; BOOL x6; unsigned long long x7; })a2 alongsideAnimationBlock:(id /* block */)a3;
- (void)reset;

@end
