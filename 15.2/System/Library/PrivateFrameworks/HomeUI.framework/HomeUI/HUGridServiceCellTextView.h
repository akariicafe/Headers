@class UIColor, NSString, UIFont, HFServiceNameComponents;

@interface HUGridServiceCellTextView : UIView

@property (class, readonly, nonatomic) double minimumDescriptionScaleFactor;

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) HFServiceNameComponents *serviceNameComponents;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (nonatomic) double descriptionTextColorDimmingFactor;
@property (nonatomic) double lineHeight;
@property (nonatomic) BOOL shouldShowRoomName;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) double topToFirstBaselineDistance;
@property (readonly, nonatomic) double lastBaselineToBottomDistance;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)_updateMode;
- (id)_commonTextAttributesWithLineBreakMode:(long long)a0;
- (id)_combinedAttributedString;
- (void)_drawSeperateLabels;
- (void)_drawCombinedLabel;
- (void)_drawDescriptionLabel;
- (id)_effectiveTextColor;

@end
