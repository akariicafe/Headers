@class NSString, NSArray, MRPlatterViewController;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRPlatterViewControllerDelegate, CSAdjunctItemHosting> {
    MRPlatterViewController *_platterViewController;
    struct CGSize { double width; double height; } _containerSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (long long)presentationPriority;
- (long long)presentationType;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedFrameForMediaControls;
- (void)_layoutMediaControls;
- (void)_updatePersistentUpdatesEnabled:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void)platterViewController:(id)a0 didReceiveInteractionEvent:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
