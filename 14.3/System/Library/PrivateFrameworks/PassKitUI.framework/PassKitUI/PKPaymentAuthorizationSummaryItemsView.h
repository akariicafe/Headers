@class UIFont, NSString, PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView;

@interface PKPaymentAuthorizationSummaryItemsView : UIView {
    NSMutableArray *_labelViews;
    NSMutableArray *_valueViews;
    NSMutableArray *_titleViews;
    NSMutableArray *_hasBottomPadding;
    NSMutableArray *_usesLargeFont;
    UILabel *_titleLabel;
    UIFont *_titleFont;
    UIFont *_labelLargeFont;
    UIFont *_labelRegularFont;
    UIView *_separatorView;
}

@property (weak, nonatomic) PKPaymentAuthorizationLayout *layout;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL showsBoldValueText;
@property (nonatomic) BOOL showsTopSeparator;
@property (nonatomic) BOOL occludesBodyView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)titleLabel;
- (void)removeLabelsAndValues;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addLabel:(id)a0 value:(id)a1 title:(id)a2 itemType:(unsigned long long)a3 maxLabelLines:(long long)a4 maxValueLines:(long long)a5 hasBottomPadding:(BOOL)a6 useDarkColor:(BOOL)a7 useLargeFont:(BOOL)a8;
- (id)initWithLayout:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)makeTitleLabel;
- (id)_labelAttributedStringWithString:(id)a0 withDarkColor:(BOOL)a1 largeFont:(BOOL)a2;
- (id)_valueAttributedStringWithString:(id)a0 type:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 andLayout:(BOOL)a1;

@end
