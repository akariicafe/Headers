@class NSString, UIBarButtonItem;
@protocol PMEditorToolbarDelegate, PMPlayerControlling;

@interface PMEditorBottomToolbar : UIToolbar <PMEditorAutoEditCompletionActionDelegate>

@property (nonatomic) unsigned long long spinnerState;
@property (nonatomic) BOOL autoEditingIsInProgress;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (weak, nonatomic) id<PMPlayerControlling> playerController;
@property (weak, nonatomic) id<PMEditorToolbarDelegate> toolbarDelegate;
@property (nonatomic) BOOL showDoneCancelButtons;
@property (nonatomic) BOOL fromTitle;
@property (nonatomic) BOOL fromMusic;
@property (nonatomic) BOOL fromDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillResignActive:(id)a0;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (id)_cancelButtonItem;
- (void).cxx_destruct;
- (void)pause:(id)a0;
- (void)_done:(id)a0;
- (void)dealloc;
- (id)_activityItem;
- (id)initWithCoder:(id)a0;
- (void)_play:(id)a0;
- (void)updateItems;
- (id)_flexibleSpaceItem;
- (void)setItems:(id)a0;
- (void)autoEditingDidEnd;
- (void)_updateItemsAnimated:(BOOL)a0;
- (void)_handlePlayerDidBeginPlayingNotification:(id)a0;
- (void)_handlePlayerDidDidPlayToEndTimeNotification:(id)a0;
- (id)_doneActivityButtonRow;
- (id)_playActivityButtonRow;
- (id)_playButtonRow;
- (id)_pauseButtonRow;
- (id)_playButtonItem;
- (id)_pauseButtonItem;
- (id)_fixedSpaceItem;
- (void)startAutoEditWaitingBehavior;
- (void)cancelAutoEditWaitingBehavior;
- (void)performAutoEditDidCompleteAction;
- (void)autoEditingWillBegin;

@end
