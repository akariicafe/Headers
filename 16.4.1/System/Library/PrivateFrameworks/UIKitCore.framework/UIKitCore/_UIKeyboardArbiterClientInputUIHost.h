@class UIKeyboardScenePresentationModeManager;

@interface _UIKeyboardArbiterClientInputUIHost : _UIKeyboardArbiterClient <UIKeyboardScenePresentationModeManagerDelegate>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrameIncludingRemoteIAV;
@property (nonatomic) BOOL showing;
@property (readonly, nonatomic) UIKeyboardScenePresentationModeManager *presentationModeManager;
@property (nonatomic) BOOL inputDestinationInWindowedMode;

- (void)resetSnapshotWithWindowCheck:(BOOL)a0;
- (BOOL)allowedToShowKeyboard;
- (id)currentHostedPIDs;
- (void)applicationKeyWindowWillChange:(id)a0;
- (void)signalKeyboardUIDidChange:(id)a0 onCompletion:(id /* block */)a1;
- (id)init;
- (BOOL)remoteKeyboardUndocked:(BOOL)a0;
- (void)queue_sceneBecameFocused:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_layoutKeyboardViews:(id)a0;
- (void)_updateKeyboardUIScenePresentationMode;
- (id)arbiterProxy;
- (void)completeKeyboardChange;
- (void)configureArbiterCommunication:(id)a0;
- (BOOL)isCurrentInputDestination;
- (BOOL)isSpotlight:(id)a0;
- (void)keyboardSendNotification:(unsigned long long)a0 withInfo:(id)a1 isStart:(BOOL)a2;
- (void)keyboardVisibilityDidChangeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visible:(BOOL)a1 tracking:(BOOL)a2;
- (void)scenePresentationModeManager:(id)a0 didChangeToMode:(unsigned long long)a1;
- (void)setCurrentUIState:(id)a0;
- (BOOL)shouldSnapshot;
- (void)snapsShotKeyboard;

@end
