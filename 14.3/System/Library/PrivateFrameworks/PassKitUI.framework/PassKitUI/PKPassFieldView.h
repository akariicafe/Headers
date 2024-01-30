@class PKPassFieldTemplate, PKDiffView, PKPassField, UILabel, PKPassColorProfile;

@interface PKPassFieldView : UIView {
    BOOL _needsRecalculation;
    struct CGSize { double width; double height; } _cachedSize;
    long long _background;
}

@property (retain, nonatomic) PKDiffView *diffView;
@property (retain, nonatomic) PKPassField *field;
@property (retain, nonatomic) PKPassFieldTemplate *fieldTemplate;
@property (retain, nonatomic) PKPassColorProfile *colorProfile;
@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

+ (id)newViewForField:(id)a0 fieldTemplate:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidateCachedFieldSize;
- (id)initWithField:(id)a0 fieldTemplate:(id)a1;
- (void)setColorProfile:(id)a0 background:(long long)a1;
- (BOOL)_shouldDisplayLabel;
- (id)_labelAttributedStringForColorProfile:(id)a0;
- (id)_valueAttributedStringForColorProfile:(id)a0;
- (struct CGSize { double x0; double x1; })_resizeMultiLineValueFontForAvailableSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (void)layoutSubviews;
- (void)presentDiff:(id)a0 inView:(id)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
