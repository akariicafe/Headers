@interface VideosUI.PageContentView : UIView {
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ _playbackState;
    void /* unknown type, empty encoding */ playbackDidStartObserver;
    void /* unknown type, empty encoding */ playbackDidStopObserver;
    void /* unknown type, empty encoding */ verticalStackView;
    void /* unknown type, empty encoding */ preferredInterfaceStyle;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ backgroundViewModel;
    void /* unknown type, empty encoding */ lastViewWidth;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
