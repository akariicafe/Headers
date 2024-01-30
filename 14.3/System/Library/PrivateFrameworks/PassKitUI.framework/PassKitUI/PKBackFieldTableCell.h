@class PKPassField, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell {
    UITextView *_valueTextView;
    double _cachedWidth;
    double _computedHeight;
}

@property (retain, nonatomic) PKPassField *field;
@property (nonatomic) BOOL showLinks;

+ (id)titleFont;
+ (id)_linkTextAttributes;
+ (id)valueFont;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_detectLinks;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textBounds;
- (void)_setupTextAttributes;
- (id)initWithField:(id)a0 showLinks:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
