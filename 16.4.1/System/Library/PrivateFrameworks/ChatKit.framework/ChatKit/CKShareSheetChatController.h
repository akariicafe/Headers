@interface CKShareSheetChatController : CKComposeChatController {
    unsigned long long _interactionSignPost;
}

@property (nonatomic) BOOL alreadySetUp;

- (void)keyboardDidChangeFrame:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_beginInteractionSignPost;
- (void)_endInteractionSignPost;
- (void)insertInitialCompositionIfNeeded;
- (void)sendComposition:(id)a0;
- (BOOL)shouldDismissAfterSend;

@end
