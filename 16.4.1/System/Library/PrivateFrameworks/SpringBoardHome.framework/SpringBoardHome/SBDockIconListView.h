@interface SBDockIconListView : SBIconListView

@property (class, readonly, nonatomic) double defaultHeight;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrameForOrientation:(long long)a0;
+ (unsigned long long)defaultIconViewConfigurationOptions;

- (BOOL)allowsAddingIconCount:(unsigned long long)a0;
- (BOOL)isVertical;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithModel:(id)a0 layoutProvider:(id)a1 iconLocation:(id)a2 orientation:(long long)a3 iconViewProvider:(id)a4;
- (BOOL)adaptsOrientationToTraitCollection;

@end
