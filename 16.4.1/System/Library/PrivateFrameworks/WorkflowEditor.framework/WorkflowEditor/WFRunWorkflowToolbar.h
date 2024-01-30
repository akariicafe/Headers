@class NSArray, NSUndoManager, UIToolbar, NSString, UIBarButtonItem;
@protocol WFRunWorkflowToolbarDelegate;

@interface WFRunWorkflowToolbar : UIView <UIToolbarDelegate>

@property (weak, nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL showsDetailsButton;
@property (retain, nonatomic) UIBarButtonItem *undoItem;
@property (retain, nonatomic) UIBarButtonItem *redoItem;
@property (retain, nonatomic) UIBarButtonItem *runItem;
@property (retain, nonatomic) UIBarButtonItem *stopItem;
@property (retain, nonatomic) UIBarButtonItem *settingsItem;
@property (retain, nonatomic) UIBarButtonItem *shareItem;
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceItem;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSArray *undoRedoItems;
@property (readonly, copy, nonatomic) NSArray *runItems;
@property (weak, nonatomic) NSUndoManager *workflowUndoManager;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isPulsating) BOOL pulsating;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL playEnabled;
@property (nonatomic) BOOL shareEnabled;
@property (nonatomic) BOOL shareHidden;
@property (weak, nonatomic) id<WFRunWorkflowToolbarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)positionForBar:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateBarButtonItems;
- (void)updatePlayButtonVisibility;
- (id)initShowingDetailsButton:(BOOL)a0;
- (id)undoRedoItemsWithSpacer:(BOOL)a0;
- (void)updateShareButtonVisibility;
- (void)updateUndoItems;
- (BOOL)isNotRunningAndIsEditing;
- (void)playTapped;
- (void)redoTapped;
- (id)runItemsWithSpacer:(BOOL)a0;
- (void)settingsTapped;
- (void)shareTapped;
- (void)stopTapped;
- (void)undoTapped;
- (void)updateRunningButtons;
- (void)updateSettingsButtonVisibility;

@end
