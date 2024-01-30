@class NSString;

@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    BOOL _inlineMode;
    BOOL _finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)title;
- (void)viewDidDisappear:(BOOL)a0;
- (id)init;
- (id)pinInstructionsPrompt;
- (void)didCancelEnteringPIN;

@end
