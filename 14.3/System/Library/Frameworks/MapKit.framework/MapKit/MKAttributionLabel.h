@class NSAttributedString;

@interface MKAttributionLabel : UIView {
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    BOOL _useDarkText;
}

@property (nonatomic) unsigned long long mapType;

- (void)_updateTextColor;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_attributesWithStroke:(BOOL)a0;
- (void)_prepareLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
