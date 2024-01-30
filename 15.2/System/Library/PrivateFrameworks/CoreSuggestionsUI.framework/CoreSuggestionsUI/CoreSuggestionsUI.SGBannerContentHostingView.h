@interface CoreSuggestionsUI.SGBannerContentHostingView : UIView {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ banner;
    void /* unknown type, empty encoding */ suggestionStore;
}

- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBanner:(id)a0;
- (void)updateWithBanner:(id)a0;
- (void)setSuggestionWithStore:(id)a0;
- (double)actionButtonLeadingEdgeOffset;

@end
