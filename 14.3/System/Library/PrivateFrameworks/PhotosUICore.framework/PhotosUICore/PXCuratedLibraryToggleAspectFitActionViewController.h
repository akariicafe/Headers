@class UILabel, UISegmentedControl;

@interface PXCuratedLibraryToggleAspectFitActionViewController : PXCuratedLibraryActionViewController {
    UILabel *_label;
    UISegmentedControl *_segmentedControl;
    double _spacing;
}

- (void)_handleSegmentedControl:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillLayoutSubviews;

@end
