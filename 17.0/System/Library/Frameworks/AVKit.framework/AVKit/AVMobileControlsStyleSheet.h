@class UITraitCollection;

@interface AVMobileControlsStyleSheet : NSObject {
    double _statusBarHeight;
}

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } landscapeFullscreenInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } portraitFullscreenInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } embeddedInlineInsets;
@property (readonly, nonatomic) double standardPaddingFullScreen;
@property (readonly, nonatomic) double standardPaddingInline;

- (id)initWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })playbackControlsViewLayoutMarginsForView:(id)a0 keyboardHeight:(double)a1 isFullScreen:(BOOL)a2;

@end
