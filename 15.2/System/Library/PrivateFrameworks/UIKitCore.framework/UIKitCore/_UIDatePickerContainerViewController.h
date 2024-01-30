@class NSString, _UIDatePickerOverlayPresentation;

@interface _UIDatePickerContainerViewController : UIViewController <_UIPassthroughScrollInteractionDelegate>

@property (copy, nonatomic) id /* block */ pendingKeyboardAdjustment;
@property (readonly, nonatomic) _UIDatePickerOverlayPresentation *presentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_didReceiveEscapeKey:(id)a0;
- (void)keyboardFrameWillChange:(id)a0;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (id)keyCommands;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithPresentation:(id)a0;
- (void)didChangeKeyboardAvoidanceAdjustmentDeferral;

@end
