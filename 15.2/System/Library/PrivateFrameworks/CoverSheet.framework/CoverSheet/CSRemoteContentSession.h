@class SBSRemoteContentDefinition, NSString, CSRemoteContentModalViewController;
@protocol CSRemoteContentSessionHostDelegate, CSRemoteContentSessionPreferencesProvider, SBFAuthenticationStatusProvider;

@interface CSRemoteContentSession : NSObject <CSRemoteContentModalViewControllerDelegate> {
    BOOL _activated;
    BOOL _presented;
    CSRemoteContentModalViewController *_containerViewController;
}

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
- (void).cxx_destruct;
- (void)activate;
- (void)_activate;
- (void)_reactivate;
- (id)_errorWithCode:(long long)a0;
- (void)_invalidateWithErrorCode:(long long)a0;
- (BOOL)_invalidateForReason:(long long)a0 error:(id)a1 completion:(id /* block */)a2;
- (BOOL)remoteContentModalViewController:(id)a0 requestsDismissalForType:(long long)a1 completion:(id /* block */)a2;
- (void)remoteContentModalViewController:(id)a0 didUpdateWithPreferences:(id)a1;
- (void)remoteContentModalViewController:(id)a0 didTerminateWithError:(id)a1;
- (id)initWithDefinition:(id)a0 authenticationStatusProvider:(id)a1;

@end
