@protocol DDParsecHostVCInterface;

@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    BOOL _receivedInteractionDidFinish;
}

@property (weak) id<DDParsecHostVCInterface> hostSideDelegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)interactionEnded;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)interactionEndedWithPunchout:(BOOL)a0;
- (void)showingErrorView:(BOOL)a0;
- (void)showingFTE:(BOOL)a0;
- (void)openParsecURL:(id)a0;
- (void)getStatusBarHidden:(id /* block */)a0;
- (void)openTrailerPunchout:(id)a0;
- (void)performClientQueryWithServerAccessPermitted:(BOOL)a0 localSearchPermitted:(BOOL)a1;
- (void)remoteVCIsReady;

@end
