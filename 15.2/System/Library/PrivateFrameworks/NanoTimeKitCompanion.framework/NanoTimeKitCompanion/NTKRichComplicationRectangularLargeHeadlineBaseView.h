@class NTKRichComplicationImageView, NTKColoringLabel, CDComplicationHostingView;

@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {
    NTKRichComplicationImageView *_headerImageView;
    CDComplicationHostingView *_headerSwiftUIView;
    NTKColoringLabel *_headerLabel;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)init;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;
- (void)_updateTemplateHeaderWithTextProvider:(id)a0 imageProvider:(id)a1 viewData:(id)a2 reason:(long long)a3;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
