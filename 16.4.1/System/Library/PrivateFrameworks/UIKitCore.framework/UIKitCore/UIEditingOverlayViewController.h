@class UIUndoGestureInteraction, _UIActionWhenIdle;
@protocol UIInteraction;

@interface UIEditingOverlayViewController : UIViewController

@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction;
@property (retain, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction;
@property (retain, nonatomic) id<UIInteraction> pencilTextInputInteraction;

- (void)updateEditingOverlayContainer;
- (void)_addInteractions;
- (BOOL)_canShowWhileLocked;
- (void)_addPencilTextInputInteraction;
- (void)viewDidLoad;
- (void)_removeInteractions;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
