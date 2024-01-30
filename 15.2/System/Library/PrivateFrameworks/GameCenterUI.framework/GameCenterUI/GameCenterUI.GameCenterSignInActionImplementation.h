@interface GameCenterUI.GameCenterSignInActionImplementation : NSObject <AAUISignInControllerDelegate> {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ signInViewController;
    void /* unknown type, empty encoding */ currentActionOutcome;
}

- (void)signInController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)signInControllerDidCancel:(id)a0;

@end
