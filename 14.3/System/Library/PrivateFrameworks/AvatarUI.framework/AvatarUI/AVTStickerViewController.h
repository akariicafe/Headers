@class UIView, NSString, AVTUIEnvironment, AVTStickerPagingController, AVTPaddleView, AVTAvatarRecordDataSource, AVTAvatarPickerDataSource, AVTStickerTaskScheduler, AVTSimpleAvatarPicker;
@protocol AVTStickerDisclosureValidationDelegate, AVTPresenterDelegate, AVTAvatarStore, AVTUILogger;

@interface AVTStickerViewController : UIViewController <AVTStickerPagingControllerDelegate, AVTStickerPagingControllerDelegate, AVTAvatarPickerDelegate, AVTAvatarRecordDataSourceObserver, AVTPresenterDelegate, AVTPaddleViewDelegate, AVTObjectViewController, AVTUIViewSnapshotProvider>

@property (readonly, nonatomic) id<AVTAvatarStore> store;
@property (readonly, nonatomic) AVTAvatarRecordDataSource *recordDataSource;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) BOOL allowPeel;
@property (retain, nonatomic) AVTAvatarPickerDataSource *avatarPickerDataSource;
@property (retain, nonatomic) AVTSimpleAvatarPicker *avatarPicker;
@property (retain, nonatomic) AVTStickerPagingController *pagingController;
@property (retain, nonatomic) NSString *selectedRecordIdentifier;
@property (retain, nonatomic) AVTPaddleView *paddleView;
@property (retain, nonatomic) AVTStickerTaskScheduler *taskScheduler;
@property (weak, nonatomic) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (nonatomic) BOOL allowEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;

+ (unsigned long long)minimumNumberOfVisibleItemForWidth:(double)a0 environment:(id)a1;
+ (double)headerEdgeMarginForEnvironment:(id)a0;
+ (id)inUseStickerPack;
+ (id)stickersAvatarsFetchRequest;
+ (double)headerHeightForWidth:(double)a0 interitemSpacing:(double)a1 environment:(id)a2;
+ (id)stickerViewControllerForStore:(id)a0 allowEditing:(BOOL)a1 allowPeel:(BOOL)a2;

- (void)reloadData;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)paddleViewTapped:(id)a0;
- (void)paddleViewWantsToBeDismissed:(id)a0;
- (void)updateHeaderSize;
- (void)snapshotInBlock:(id /* block */)a0;
- (void)presentMemojiEditorForCreation;
- (double)headerMaxY;
- (id)initWithStore:(id)a0 selectedRecordIdentifier:(id)a1 allowEditing:(BOOL)a2 allowPeel:(BOOL)a3 environment:(id)a4;
- (void)updatePagingControllerInsets;
- (BOOL)shouldPresentPaddleView;
- (void)selectAvatarRecordAtIndex:(long long)a0 hideHeader:(BOOL)a1;
- (void)selectDefaultAvatarIfNeeded;
- (void)presentPaddleViewIfNeeded;
- (void)updateHeaderPositionWithContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePaddleViewLayoutIfNecessary;
- (void)selectRecordForIdentifier:(id)a0;
- (void)updateScrollToShowAvatarPicker:(BOOL)a0;
- (void)reloadPickerView;
- (BOOL)allowAvatarCreation;
- (void)dismissPaddleViewIfNecessary;
- (void)stickerControllerDidEnterBackground;
- (void)stickerControllerWillEnterForeground;
- (void)editCurrentMemoji;
- (void)swipeRightWithDelay:(long long)a0 forCompletionHandler:(id /* block */)a1;
- (void)swipeLeftWithDelay:(long long)a0 forCompletionHandler:(id /* block */)a1;
- (void)avatarPicker:(id)a0 didSelectAvatarRecord:(id)a1;
- (void)presentAvatarUIController:(id)a0 animated:(BOOL)a1;
- (void)stickerPagingController:(id)a0 pageDidScrollToOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)dismissAvatarUIControllerAnimated:(BOOL)a0;
- (void)dataSource:(id)a0 didAddRecord:(id)a1 atIndex:(unsigned long long)a2;
- (void)dataSource:(id)a0 didEditRecord:(id)a1 atIndex:(unsigned long long)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)dataSource:(id)a0 didRemoveRecord:(id)a1 atIndex:(unsigned long long)a2;
- (void)significantRecordChangeInDataSource:(id)a0;
- (void)avatarPickerDidEndCameraSession:(id)a0;
- (void)avatarPickerWillStartCameraSession:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
