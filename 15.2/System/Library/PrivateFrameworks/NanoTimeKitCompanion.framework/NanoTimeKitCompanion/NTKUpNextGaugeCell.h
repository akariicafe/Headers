@class NSString, UILayoutGuide, NTKColoringLabel, NTKRichComplicationLineProgressView, CLKFont;

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    UILayoutGuide *_contentLayoutGuide;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKRichComplicationLineProgressView *_progressView;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_boldFont;
    CLKFont *_semiboldFont;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)prepareForReuse;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)configureWithContent:(id)a0;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;

@end
