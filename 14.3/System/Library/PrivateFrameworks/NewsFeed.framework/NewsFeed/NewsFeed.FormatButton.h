@class NSString;

@interface NewsFeed.FormatButton : UIControl {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ formatLayoutView;
    void /* unknown type, empty encoding */ stateMaskFormatLayoutViews;
    void /* unknown type, empty encoding */ actions;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;

@end
