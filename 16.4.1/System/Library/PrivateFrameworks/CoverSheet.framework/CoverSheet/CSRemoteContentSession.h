@class SBSRemoteContentDefinition, CSDashBoardRemoteContentSettings, CSRemoteContentHostViewController, NSString, CSCoverSheetViewControllerBase;
@protocol CSRemoteContentViewControllerProtocol, CSRemoteContentSessionHostDelegate, SBFAuthenticationStatusProvider, CSRemoteContentSessionPreferencesProvider;

@interface CSRemoteContentSession : NSObject <CSRemoteContentViewControllerDelegate, CSRemoteContentHostDelegate> {
    BOOL _activated;
    BOOL _presented;
    BOOL _waitingForPreferences;
    BOOL _waitingForContentFrame;
}

@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings;
@property (retain, nonatomic) CSCoverSheetViewControllerBase<CSRemoteContentViewControllerProtocol> *containerViewController;
@property (retain, nonatomic) CSRemoteContentHostViewController *hostViewController;
@property (weak, nonatomic) id<CSRemoteContentSessionHostDelegate> hostDelegate;
@property (weak, nonatomic) id<CSRemoteContentSessionPreferencesProvider> preferencesProvider;
@property (readonly, copy, nonatomic) SBSRemoteContentDefinition *definition;
@property (readonly, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateWithError:(id)a0;
- (void)_reactivate;
- (void)dealloc;
- (void)activate;
- (void).cxx_destruct;
- (id)_errorWithCode:(long long)a0;
- (void)forceDisconnect;
- (void)_activateHostViewControllerWithPreferences:(id)a0;
- (void)_activateRemoteViewController:(id)a0 remoteError:(id)a1;
- (BOOL)_invalidateForReason:(long long)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_invalidateWithErrorCode:(long long)a0;
- (BOOL)_remoteContentFrameIsValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_remoteContentViewControllerForPreferences:(id)a0;
- (void)_requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;
- (void)didChangeRemoteHostContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeRemotePreferences:(id)a0;
- (id)initWithDefinition:(id)a0 authenticationStatusProvider:(id)a1;
- (BOOL)prefersInlineForPreferences:(id)a0;
- (double)remoteContentComplicationHeightInset;
- (void)remoteContentHostViewController:(id)a0 didTerminateWithError:(id)a1;
- (BOOL)remoteContentViewController:(id)a0 requestsDismissalForType:(long long)a1 completion:(id /* block */)a2;

@end
