@class NSString;

@interface _UIActivityActionCellTitleLabel : UILabel

@property (retain, nonatomic) NSString *textStyle;

- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateFontWithSizeCategory:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 sizeCategory:(id)a1;

@end
