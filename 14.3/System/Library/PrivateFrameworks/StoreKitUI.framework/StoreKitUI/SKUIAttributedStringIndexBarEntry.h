@class NSDictionary, NSAttributedString;

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {
    BOOL _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)_tintColorDidChange;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)entryAttributedString;
- (id)_synthesizedAttributedString;
- (void)_invalidateSynthesizedAttributedString;

@end
