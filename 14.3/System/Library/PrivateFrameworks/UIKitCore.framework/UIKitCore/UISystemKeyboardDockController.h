@class NSString, UIKeyboardDockItem, UIKeyboardDockView, UIButton;

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {
    BOOL _dictationHasUsedServerManualEndpointing;
    BOOL _dictationUsingServerManualEndpointing;
    BOOL _isSuppressingDockItemTouch;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIButton *_stopDictationButton;
}

@property (retain, nonatomic) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)keyboardDockView:(id)a0 didPressDockItem:(id)a1 withEvent:(id)a2;
- (void)dealloc;
- (void)loadView;
- (void)keyboardItemButtonWasTapped:(id)a0 withEvent:(id)a1;
- (void)_dictationDidBeginNotification:(id)a0;
- (void)setKeyboardDockItem;
- (void)dictationItemButtonWasPressed:(id)a0 withEvent:(id)a1;
- (void)globeItemButtonWasPressed:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)updateDockItemsVisibility;
- (void)viewDidLoad;

@end
