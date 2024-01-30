@class CADisplayLink, _UIPortalView, UIView;
@protocol UICoordinateSpace;

@interface UITextModernLoupeView : UIView {
    UIView *_sourceView;
    UIView *_maskView;
    UIView *_backgroundView;
    UIView *_glowView;
    UIView *_portalContainerView;
    CADisplayLink *_displayLink;
    _UIPortalView *_portalView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly, nonatomic) id<UICoordinateSpace> containerCoordinateSpace;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) double visualOffset;
@property (nonatomic) struct CGPoint { double x; double y; } modelPosition;

+ (BOOL)isModernLoupeEnabled;

- (void)layoutSubviews;
- (void)_displayLinkFired:(id)a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1 removeWhenComplete:(BOOL)a2;
- (void)_updateColorsForTraitCollection:(id)a0;
- (void)_stopDisplayLink;
- (id)backgroundColorIfNecessary;
- (id)initWithSourceView:(id)a0;

@end
