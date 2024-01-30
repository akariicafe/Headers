@class UIUndoGestureInteraction, _UIActionWhenIdle;
@protocol UIInteraction;

@interface UIEditingOverlayViewController : UIViewController

@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction;
@property (retain, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction;
@property (retain, nonatomic) id<UIInteraction> pencilTextInputInteraction;

- (void)viewDidLoad;
- (void)updateEditingOverlayContainer;
- (BOOL)_canShowWhileLocked;
- (void)_removeInteractions;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_addInteractions;
- (void)viewDidAppear:(BOOL)a0;
- (void)_addPencilTextInputInteraction;

@end
