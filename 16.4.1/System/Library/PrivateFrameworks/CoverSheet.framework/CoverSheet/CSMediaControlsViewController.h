@class NSString, NSArray, MRUCoverSheetViewController;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRUCoverSheetViewControllerDelegate, CSAdjunctItemHosting> {
    MRUCoverSheetViewController *_mediaRemoteViewController;
    long long _mediaRemoteLayout;
    struct CGSize { double width; double height; } _containerSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double containerCornerRadius;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (long long)presentationPriority;
- (void)_updatePreferredContentSize;
- (BOOL)handleEvent:(id)a0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (long long)presentationType;
- (void)viewDidLoad;
- (void)coverSheetViewController:(id)a0 didReceiveInteractionEvent:(id)a1;
- (id)init;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedFrameForMediaControls;
- (void)_updatePersistentUpdatesEnabled:(BOOL)a0;
- (void)_layoutMediaControls;
- (void)viewWillLayoutSubviews;
- (double)_preferredMediaRemoteHeight;
- (void).cxx_destruct;
- (void)coverSheetViewController:(id)a0 willChangeToLayout:(long long)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;

@end
