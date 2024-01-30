@interface VideosUI.FlowcaseViewCell : VideosUI.CarouselViewCell {
    void /* unknown type, empty encoding */ flowcaseLayout;
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ scrollViewMonitor;
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ alphaImageViewModel;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ imageViewContext;
    void /* unknown type, empty encoding */ playbackDidStartObserver;
    void /* unknown type, empty encoding */ playbackDidStopObserver;
    void /* unknown type, empty encoding */ playbackDidPlayToEndObserver;
    void /* unknown type, empty encoding */ userInterfaceStyleToRestore;
    void /* unknown type, empty encoding */ waitingToShowImageWhilePaused;
    void /* unknown type, empty encoding */ ignorePlaybackStop;
}

- (void)vui_cellDidEndDisplaying;
- (void)vui_cellWillBeDisplayed;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)onImageDidLoad:(id)a0;

@end
