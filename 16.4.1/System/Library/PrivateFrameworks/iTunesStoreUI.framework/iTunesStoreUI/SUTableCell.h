@class UIColor, SUItemOfferButton, UIBezierPath, SUTableCellContentView, SUCellConfiguration;

@interface SUTableCell : UITableViewCell {
    SUTableCellContentView *_configurationView;
    unsigned char _hideHighlight : 1;
    SUItemOfferButton *_itemOfferButton;
}

@property (retain, nonatomic) UIColor *bottomBorderColor;
@property (nonatomic) int clipCorners;
@property (readonly, nonatomic) UIBezierPath *clippingPath;
@property (retain, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic) BOOL drawAsDisabled;
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (readonly, retain, nonatomic) SUItemOfferButton *itemOfferButton;
@property (nonatomic) struct { unsigned long long localIndex; unsigned long long localCount; unsigned long long globalIndex; unsigned long long globalCount; } position;
@property (nonatomic) BOOL showHighlight;
@property (retain, nonatomic) UIColor *topBorderColor;
@property (nonatomic) BOOL usesSubviews;
@property (nonatomic) long long editState;

- (BOOL)_canDrawContent;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setShowingDeleteConfirmation:(BOOL)a0;
- (id)copyPurchaseAnimationView;

@end
