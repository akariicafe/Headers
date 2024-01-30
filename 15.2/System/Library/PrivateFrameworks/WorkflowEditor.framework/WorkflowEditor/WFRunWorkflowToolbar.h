@class NSArray, NSUndoManager, UIToolbar, NSString, UIBarButtonItem;
@protocol WFRunWorkflowToolbarDelegate;

@interface WFRunWorkflowToolbar : UIView <UIToolbarDelegate>

@property (weak, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIBarButtonItem *undoItem;
@property (retain, nonatomic) UIBarButtonItem *redoItem;
@property (retain, nonatomic) UIBarButtonItem *runItem;
@property (retain, nonatomic) UIBarButtonItem *stopItem;
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

- (void)layoutSubviews;
- (long long)positionForBar:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateBarButtonItems;
- (void)updatePlayButtonVisibility;
- (void)playTapped;
- (void)stopTapped;
- (void)shareTapped;
- (BOOL)isNotRunningAndIsEditing;
- (void)updateShareButtonVisibility;
- (void)updateUndoItems;
- (void)undoTapped;
- (void)redoTapped;

@end
