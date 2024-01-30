@class NSString, UILayoutGuide, NTKRichComplicationLineProgressView, CLKUIColoringLabel, CLKFont;

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    UILayoutGuide *_contentLayoutGuide;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_descriptionLine1Label;
    NTKRichComplicationLineProgressView *_progressView;
    CLKUIColoringLabel *_descriptionLine2Label;
    CLKUIColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_boldFont;
    CLKFont *_semiboldFont;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
