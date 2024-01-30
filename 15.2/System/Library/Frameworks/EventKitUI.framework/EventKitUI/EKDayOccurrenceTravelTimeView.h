@class UIColor, NSArray, UIImageView, NSAttributedString, UILabel, UIView, NSLayoutConstraint;
@protocol EKDayOccurrenceTravelTimeViewMetricsDelegate;

@interface EKDayOccurrenceTravelTimeView : UIView

@property (retain) UIImageView *travelTimeIcon;
@property (retain) UILabel *travelTimeLabel;
@property (retain) UIView *horizontalLineView;
@property (retain) NSLayoutConstraint *iconWidth;
@property (retain) NSLayoutConstraint *iconHeight;
@property (retain) NSLayoutConstraint *leadingHorizontalPad;
@property (retain) NSLayoutConstraint *trailingHorizontalPad;
@property (retain) NSArray *constraints;
@property BOOL animatingAlpha;
@property (weak, nonatomic) id<EKDayOccurrenceTravelTimeViewMetricsDelegate> delegate;
@property (retain, nonatomic) UIColor *elementColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) BOOL selected;
@property (nonatomic) long long occurrenceBackgroundStyle;
@property (nonatomic) long long routingMode;
@property (copy, nonatomic) NSAttributedString *travelTimeString;
@property (nonatomic) double hairlineYPosition;

+ (void)initialize;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_iconScale;
- (id)_textFont;
- (id)_travelTimeIconForTravelModeWithColor:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_parentPadding;
- (void)_updateStringsColorsAndConstraintConstants;
- (double)alphaForElements;
- (id)initWithReusableTravelTimeView:(id)a0;

@end
