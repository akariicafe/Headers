@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl

@property (readonly, nonatomic) BOOL lastTouchRemainedOnSelectedSegment;

+ (double)_sectionIndicatorInsetForTraitCollection:(id)a0 size:(int)a1;
+ (double)_cornerRadiusForTraitCollection:(id)a0 size:(int)a1;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_highlightSegment:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
