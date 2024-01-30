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

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (long long)presentationPriority;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedFrameForMediaControls;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)coverSheetViewController:(id)a0 willChangeToLayout:(long long)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)viewDidDisappear:(BOOL)a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)_layoutMediaControls;
- (double)_preferredMediaRemoteHeight;
- (void)_updatePersistentUpdatesEnabled:(BOOL)a0;
- (void)coverSheetViewController:(id)a0 didReceiveInteractionEvent:(id)a1;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;

@end
