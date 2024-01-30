@class NSDictionary, NSAttributedString;

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {
    BOOL _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;

- (id)initWithAttributedString:(id)a0;
- (id)_synthesizedAttributedString;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_tintColorDidChange;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)entryAttributedString;
- (void)_invalidateSynthesizedAttributedString;

@end
