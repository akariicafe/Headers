@class NSString;

@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    BOOL _inlineMode;
    BOOL _finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didAcceptEnteredPIN:(id)a0;
- (id)pinInstructionsPrompt;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didCancelEnteringPIN;
- (id)title;
- (void)viewDidLoad;

@end
