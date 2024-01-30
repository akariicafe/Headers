@class UIStoryboard, NSBundle, SFShareAudioConnectingViewController, SFShareAudioSessionClient;

@interface SFShareAudioViewController : UINavigationController

@property (retain, nonatomic) SFShareAudioSessionClient *shareAudioSession;
@property (retain, nonatomic) NSBundle *mainBundle;
@property (retain, nonatomic) UIStoryboard *mainStoryboard;
@property (retain, nonatomic) SFShareAudioConnectingViewController *vcConnecting;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned int flags;

+ (id)instantiateViewController;

- (void)reportError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_sessionStart;
- (void)_showError:(id)a0;
- (void)_reportCompletion:(id)a0 mediaRouteID:(id)a1;
- (void)_showBringClose;
- (void)_sessionProgressEvent:(int)a0 info:(id)a1;
- (void)_showConfirm:(id)a0;
- (void)_showConnecting:(id)a0;
- (void)_showPairInstructions:(id)a0;
- (void)_transitionToViewController:(id)a0 animate:(BOOL)a1;
- (void)reportUserCancelled;

@end
