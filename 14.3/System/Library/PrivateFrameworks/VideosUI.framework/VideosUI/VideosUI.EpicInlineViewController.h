@class NSArray;

@interface VideosUI.EpicInlineViewController : UIViewController <TVAppTemplateImpressionable> {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ viewElement;
    void /* unknown type, empty encoding */ shelfViewModel;
    void /* unknown type, empty encoding */ horizontalCollectionViewModel;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ shelfViewController;
    void /* unknown type, empty encoding */ horizontalStackViewController;
    void /* unknown type, empty encoding */ scrollViewMonitor;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)a0;

@end
