@class MSStickerBrowserView, NSMutableDictionary, NSString, UILabel, NSMutableArray;

@interface CKRecentsViewController : CKBrowserViewController <MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate, CKBrowserDragControllerDelegate>

@property (nonatomic) BOOL hasHandwritingRecents;
@property (nonatomic) BOOL hasStickerRecents;
@property (retain, nonatomic) NSMutableArray *recentItems;
@property (retain, nonatomic) MSStickerBrowserView *browserView;
@property (retain, nonatomic) UILabel *noRecentsLabel;
@property (retain, nonatomic) NSMutableDictionary *stickerCache;
@property (nonatomic) BOOL isLoadingRecents;
@property (nonatomic, getter=isPreparingForDisplay) BOOL preparingForDisplay;
@property (copy, nonatomic) id /* block */ draggingCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)didTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (void)forceTearDownRemoteView;
- (id)initWithBalloonPlugin:(id)a0 dataSource:(id)a1;
- (BOOL)shouldShowChatChrome;
- (BOOL)mayBeKeptInViewHierarchy;
- (id)requestSnapshotDataForPersistance;
- (void)saveSnapshotForBrowserViewController;
- (void)dragManager:(id)a0 didEndDraggingItem:(id)a1 toDragTarget:(id)a2 dropArea:(int)a3;
- (BOOL)dragManager:(id)a0 canScaleItem:(id)a1;
- (BOOL)dragManager:(id)a0 canRotateItem:(id)a1;
- (BOOL)dragManager:(id)a0 canPeelItem:(id)a1;
- (void)dragManager:(id)a0 didDragItem:(id)a1 toDragTarget:(id)a2;
- (BOOL)dragManager:(id)a0 shouldCancelDraggingForItem:(id)a1 toDragTarget:(id)a2 dropArea:(int)a3;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)loadRecents;
- (void)resortAndReloadRecents;
- (void)_loadRecentHandwritingsAndStickersWithCompletion:(id /* block */)a0;
- (void)setupNoRecentsLabel;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (void)recentsUpdated;
- (id)_stickerForMSSticker:(id)a0;
- (long long)numberOfStickersInStickerBrowserView:(id)a0;
- (id)stickerBrowserView:(id)a0 stickerAtIndex:(long long)a1;
- (void)insertSticker:(id)a0 completionHandler:(id /* block */)a1;
- (void)startDragSticker:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fence:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)stickerBrowserView:(id)a0 shouldDrawBorderAroundSticker:(id)a1;
- (void)stickerDragMoved:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 fence:(id)a4 completionHandler:(id /* block */)a5;
- (void)stickerDragCanceled;
- (long long)_userInterfaceStyle;

@end
