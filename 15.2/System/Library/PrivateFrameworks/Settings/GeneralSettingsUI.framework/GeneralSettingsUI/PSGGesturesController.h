@class PSGCornerGestureDefaults;

@interface PSGGesturesController : PSListController {
    PSGCornerGestureDefaults *_cornerGestureDefaults;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateCornerSwipeSpecifiers;
- (BOOL)_anyCornerGestureAllowsDirectTouches;
- (id)allowFingerToSwipeFromCorner:(id)a0;
- (void)setAllowFingerToSwipeFromCorner:(id)a0 specifier:(id)a1;
- (id)bottomLeftCornerGestureFeature:(id)a0;
- (void)setBottomLeftCornerGestureFeature:(id)a0 specifier:(id)a1;
- (id)bottomRightCornerGestureFeature:(id)a0;
- (void)setBottomRightCornerGestureFeature:(id)a0 specifier:(id)a1;

@end
