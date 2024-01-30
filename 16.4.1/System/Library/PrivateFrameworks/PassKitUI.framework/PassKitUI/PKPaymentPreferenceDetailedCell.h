@class PKPaymentPreferenceDetailedCellTextField;

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {
    BOOL _isLeftToRight;
}

@property (nonatomic) BOOL inlineEditingEnabled;
@property (readonly, nonatomic) PKPaymentPreferenceDetailedCellTextField *textField;
@property (nonatomic) double leadingOffset;
@property (nonatomic) double minimumCellHeight;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)showTextField:(BOOL)a0;

@end
