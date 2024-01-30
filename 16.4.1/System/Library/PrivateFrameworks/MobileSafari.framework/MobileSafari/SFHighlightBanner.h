@class SFThemeColorEffectView, SLHighlight, SLAttributionView;

@interface SFHighlightBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    SLAttributionView *_attributionView;
}

@property (readonly, nonatomic) SLHighlight *highlight;
@property (copy, nonatomic) id /* block */ closeActionHandler;

- (void)_close;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0;
- (void)themeDidChange;

@end
