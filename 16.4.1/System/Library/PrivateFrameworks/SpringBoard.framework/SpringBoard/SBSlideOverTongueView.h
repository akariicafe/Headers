@class UITapGestureRecognizer, UIImageView, UIView, MTMaterialView;
@protocol SBSlideOverTongueViewDelegate;

@interface SBSlideOverTongueView : UIView {
    UIView *_tongueContainerView;
    UIImageView *_chevronImageView;
    UIView *_tongueMaskView;
    MTMaterialView *_materialView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGSize { double width; double height; } _bitmapMaskSize;
}

@property (weak, nonatomic) id<SBSlideOverTongueViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long state;

- (void)_handleTap:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateContainerPosition;
- (void)_updateContainerTransform;
- (void)_updateSubviewCollapsedExpandedState;
- (void)setDirection:(unsigned long long)a0 state:(unsigned long long)a1 animated:(BOOL)a2;

@end
