@class UIImageView, UISlider;

@interface PXCuratedLibraryZoomActionViewController : PXCuratedLibraryActionViewController {
    UIImageView *_leadingIconView;
    UISlider *_slider;
    UIImageView *_trailingIconView;
}

- (void)_handleSlider:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillLayoutSubviews;

@end
