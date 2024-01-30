@protocol DDParsecHostVCInterface;

@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    BOOL _receivedInteractionDidFinish;
}

@property (weak) id<DDParsecHostVCInterface> hostSideDelegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)interactionEnded;
- (BOOL)_canShowWhileLocked;
- (void)interactionEndedWithPunchout:(BOOL)a0;
- (void)showingErrorView:(BOOL)a0;
- (void)showingFTE:(BOOL)a0;
- (void)openParsecURL:(id)a0;
- (void)getStatusBarHidden:(id /* block */)a0;
- (void)openTrailerPunchout:(id)a0;

@end
