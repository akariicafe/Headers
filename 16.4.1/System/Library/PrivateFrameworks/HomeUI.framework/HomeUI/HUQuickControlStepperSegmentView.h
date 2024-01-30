@class NSString, UIVisualEffectView, UILabel, UIView;

@interface HUQuickControlStepperSegmentView : UIView

@property (retain, nonatomic) UIView *highlightedOverlayView;
@property (retain, nonatomic) UIVisualEffectView *titleLabelEffectView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) unsigned long long controlSize;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSegmentViewHighlighted;
@property (nonatomic) unsigned long long segmentLocation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long reachabilityState;

- (void)_contentSizeCategoryDidChange;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setTintColor:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)_updateUIHighlightedOverlayView;
- (void)_createTitleLabelIfNecessary;
- (id)initWithStyle:(unsigned long long)a0 orientation:(unsigned long long)a1 controlSize:(unsigned long long)a2;

@end
