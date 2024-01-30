@class CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, CAShapeLayer, UIVisualEffectView, UIView, UILabel, UIButton;
@protocol CAMDescriptionOverlayViewDelegate;

@interface CAMDescriptionOverlayView : UIView

@property (readonly, nonatomic) UIVisualEffectView *_blurEffectView;
@property (readonly, nonatomic) UIView *_blackoutView;
@property (readonly, nonatomic) CAShapeLayer *_blackoutMask;
@property (readonly, nonatomic) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView;
@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) UILabel *_descriptionTitleLabel;
@property (readonly, nonatomic) UILabel *_descriptionLabel;
@property (readonly, nonatomic) UILabel *_infoTitleLabel;
@property (readonly, nonatomic) UILabel *_infoLabel;
@property (readonly, nonatomic) UIButton *_acknowledgmentButton;
@property (nonatomic, setter=_setDescriptionFontSizeMultiplier:) double _descriptionFontSizeMultiplier;
@property (nonatomic, setter=_setInfoFontSizeMultiplier:) double _infoFontSizeMultiplier;
@property (weak, nonatomic) id<CAMDescriptionOverlayViewDelegate> delegate;
@property (nonatomic, getter=isAcknowledgmentButtonHighlighted) BOOL acknowledgmentButtonHighlighted;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportFrame;
@property (nonatomic, getter=isBlackoutFrameVisible) BOOL blackoutFrameVisible;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (BOOL)_isVisible;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(BOOL)a0 animationDuration:(double)a1 completion:(id /* block */)a2;
- (id)titleTextUsingNarrowWidth:(BOOL)a0;
- (id)acknowledgmentTextUsingNarrowWidth:(BOOL)a0;
- (id)descriptionTitleTextUsingNarrowWidth:(BOOL)a0;
- (id)descriptionTextUsingNarrowWidth:(BOOL)a0;
- (id)infoTitleTextUsingNarrowWidth:(BOOL)a0;
- (id)infoTextUsingNarrowWidth:(BOOL)a0;
- (double)maxDescriptionTextWidthForNarrowWidth:(BOOL)a0 isLandscape:(BOOL)a1 usingFontSizeMultiplier:(double)a2;
- (double)maxInfoTextWidthForNarrowWidth:(BOOL)a0 isLandscape:(BOOL)a1 usingFontSizeMultiplier:(double)a2;
- (double)additionalSpacing;
- (void)_handleAcknowledgmentButtonTapped:(id)a0;
- (void)_updateFontsUsingNarrowWidth:(BOOL)a0;
- (void)_updateTextUsingNarrowWidth:(BOOL)a0;
- (void)_layoutBlackoutMaskForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
