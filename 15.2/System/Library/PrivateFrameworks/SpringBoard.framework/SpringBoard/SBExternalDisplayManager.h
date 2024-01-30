@class SBMainWorkspace, NSString, SBMainDisplaySceneManager, FBSDisplayLayoutPublisher, SBExternalDisplayController, FBSDisplayMonitor;
@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving> {
    FBSDisplayMonitor *_displayMonitor;
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayLayoutPublisher *_layoutPublisher;
    SBExternalDisplayController *_externalDisplayController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDisplayMonitor:(id)a0 mainWorkspace:(id)a1 userAuthenticationProvider:(id)a2 mainSceneManager:(id)a3;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;

@end
