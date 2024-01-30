@class NTKRichComplicationImageView, _TtC19ComplicationDisplay23ComplicationHostingView, NTKColoringLabel;

@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {
    NTKRichComplicationImageView *_headerImageView;
    _TtC19ComplicationDisplay23ComplicationHostingView *_headerSwiftUIView;
    NTKColoringLabel *_headerLabel;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;
- (void)_updateTemplateHeaderWithTextProvider:(id)a0 imageProvider:(id)a1 viewData:(id)a2 reason:(long long)a3;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
