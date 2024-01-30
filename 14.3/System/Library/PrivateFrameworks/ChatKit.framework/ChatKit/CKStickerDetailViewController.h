@class NSArray, UIVisualEffectView, NSString, UITableView;
@protocol CKStickerDetailViewControllerDelegate;

@interface CKStickerDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol>

@property (retain, nonatomic) NSArray *chatItems;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) id<CKStickerDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL wantsWindowedPresentation;
@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_viewButtonTapped:(id)a0;
- (void)stickerDetailViewControllerCloseButtonPressed:(id)a0;
- (void)deleteStickerAtIndexPath:(id)a0;
- (id)_deleteSwipeActionForIndexPath:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithStickerChatItems:(id)a0;
- (BOOL)constrainToPresentingVCBounds;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
