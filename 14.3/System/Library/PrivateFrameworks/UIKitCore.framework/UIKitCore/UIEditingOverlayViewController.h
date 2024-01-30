@class UIUndoGestureInteraction, _UIActionWhenIdle;
@protocol UIInteraction;

@interface UIEditingOverlayViewController : UIViewController

@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction;
@property (retain, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction;
@property (retain, nonatomic) id<UIInteraction> pencilTextInputInteraction;

- (void)updateEditingOverlayContainer;
- (void).cxx_destruct;
- (void)loadView;
- (void)_addPencilTextInputInteraction;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_removeInteractions;
- (void)_addInteractions;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
