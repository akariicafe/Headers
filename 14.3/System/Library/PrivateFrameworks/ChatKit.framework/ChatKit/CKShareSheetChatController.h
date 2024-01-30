@interface CKShareSheetChatController : CKComposeChatController {
    unsigned long long _interactionSignPost;
}

@property (nonatomic) BOOL alreadySetUp;

- (void)_beginInteractionSignPost;
- (void)insertInitialCompositionIfNeeded;
- (BOOL)shouldDismissAfterSend;
- (void)sendComposition:(id)a0;
- (void)_endInteractionSignPost;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
