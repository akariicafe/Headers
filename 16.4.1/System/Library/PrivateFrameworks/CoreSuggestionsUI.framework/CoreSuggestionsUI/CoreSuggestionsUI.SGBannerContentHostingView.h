@interface CoreSuggestionsUI.SGBannerContentHostingView : UIView {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ banner;
    void /* unknown type, empty encoding */ suggestionStore;
    void /* unknown type, empty encoding */ invalidateBannerConstraints;
    void /* unknown type, empty encoding */ updateViewModel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reload;
- (void).cxx_destruct;
- (id)initWithBanner:(id)a0;
- (double)actionButtonLeadingEdgeOffset;
- (void)invalidateBannerView;
- (void)setSuggestionWithStore:(id)a0;
- (void)updateBannerViews;
- (void)updateWithBanner:(id)a0;

@end
