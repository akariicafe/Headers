@class UIView, NSString, AVTView, AVTMultiAvatarController, AVTUIEnvironment, AVTSingleAvatarController, AVTViewSession, AVTAvatarRecordDataSource, AVTViewSessionProvider, AVTRecordView, AVTViewCarouselLayout;
@protocol AVTAvatarRecord, AVTRecordingCarouselControllerDelegate, AVTPresenterDelegate, AVTDisplayingCarouselControllerDelegate, AVTAvatarDisplayingController, AVTUILogger;

@interface AVTCarouselController : UIViewController <AVTAvatarActionsViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecordDataSourceObserver, AVTRecordingCarouselController, AVTDisplayingCarouselController>

@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) id<AVTAvatarRecord> currentAvatarRecord;
@property (retain, nonatomic) UIView *avtViewContainer;
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) AVTMultiAvatarController *multiAvatarController;
@property (retain, nonatomic) AVTSingleAvatarController *singleAvatarController;
@property (retain, nonatomic) id<AVTAvatarDisplayingController> avatarDisplayingController;
@property (retain, nonatomic) AVTViewCarouselLayout *avtViewLayout;
@property (readonly, nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTRecordingCarouselControllerDelegate> recordingDelegate;
@property (readonly, nonatomic) AVTRecordView *focusedRecordingView;
@property (readonly, nonatomic) id<AVTAvatarRecord> focusedRecord;
@property (nonatomic) double decelerationRate;
@property (nonatomic) BOOL singleAvatarMode;
@property (nonatomic) BOOL allowsCreate;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id<AVTDisplayingCarouselControllerDelegate> displayingDelegate;
@property (readonly, nonatomic) AVTView *focusedDisplayView;

+ (id)sessionProviderForMode:(long long)a0 environment:(id)a1;
+ (id)displayingCarouselForRecordDataSource:(id)a0;
+ (id)recordingCarouselForRecordDataSource:(id)a0;

- (void)reloadData;
- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (id)initWithMode:(long long)a0 dataSource:(id)a1;
- (id)initWithMode:(long long)a0 sessionProvider:(id)a1 dataSource:(id)a2 environment:(id)a3;
- (void)showSingleAvatarControllerAnimated:(BOOL)a0;
- (void)showMultiAvatarControllerAnimated:(BOOL)a0;
- (void)beginAVTViewSession;
- (void)setupAVTView:(id)a0;
- (void)reloadDataCenteringToAvatarRecord:(id)a0;
- (void)displayAvatarRecord:(id)a0 animated:(BOOL)a1;
- (void)setSingleAvatarMode:(BOOL)a0 fillContainer:(BOOL)a1 animated:(BOOL)a2;
- (void)notifyDelegateDidFocusRecord:(id)a0 avtView:(id)a1;
- (void)notifyDelegateWillEndFocusOnRecord:(id)a0 avtView:(id)a1;
- (void)notifyDelegateDidUpdateWithRecord:(id)a0;
- (void)presentEditorForCreatingAvatar:(id)a0;
- (void)notifyDelegateNearnessFactorDidChange:(double)a0 towardRecord:(id)a1;
- (void)displayAvatarRecordWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)presentActionsForAvatar:(id)a0;
- (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)avatarActionsViewController:(id)a0 recordUpdateForDeletingRecord:(id)a1;
- (void)avatarActionsViewControllerDidFinish:(id)a0;
- (void)wrapAndPresentViewController:(id)a0 animated:(BOOL)a1;
- (void)displayingControllerWantsToPresentEditorForCreation:(id)a0;
- (void)displayingController:(id)a0 didChangeCurrentRecord:(id)a1;
- (void)willBeginFocus:(id)a0;
- (void)didBeginFocus:(id)a0;
- (void)displayingController:(id)a0 didMoveTowardRecord:(id)a1 withFactor:(double)a2;
- (void)willEndFocus:(id)a0;
- (void)didEndFocus:(id)a0;
- (void)dataSource:(id)a0 didAddRecord:(id)a1 atIndex:(unsigned long long)a2;
- (void)dataSource:(id)a0 didEditRecord:(id)a1 atIndex:(unsigned long long)a2;
- (void)dataSource:(id)a0 didRemoveRecord:(id)a1 atIndex:(unsigned long long)a2;
- (void)significantRecordChangeInDataSource:(id)a0;
- (void)setAllowsCreate:(BOOL)a0 animated:(BOOL)a1;

@end
