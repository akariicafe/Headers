@class PSGCornerGestureDefaults;

@interface PSGGesturesController : PSListController {
    PSGCornerGestureDefaults *_cornerGestureDefaults;
    BOOL _allowFingerToSwipeFromCorner;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)specifiers;
- (void).cxx_destruct;
- (id)bottomLeftCornerGestureFeature:(id)a0;
- (BOOL)_allowFingerToSwipeFromCorner;
- (void)_updateCornerSwipeSpecifiers;
- (id)allowFingerToSwipeFromCorner:(id)a0;
- (id)bottomRightCornerGestureFeature:(id)a0;
- (void)setAllowFingerToSwipeFromCorner:(id)a0 specifier:(id)a1;
- (void)setBottomLeftCornerGestureFeature:(id)a0 specifier:(id)a1;
- (void)setBottomRightCornerGestureFeature:(id)a0 specifier:(id)a1;

@end
