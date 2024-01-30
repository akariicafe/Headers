@interface CKShareSheetChatController : CKComposeChatController {
    unsigned long long _interactionSignPost;
}

@property (nonatomic) BOOL alreadySetUp;

- (void)keyboardDidChangeFrame:(id)a0;
- (void)sendComposition:(id)a0;
- (void)_beginInteractionSignPost;
- (void)_endInteractionSignPost;
- (void)insertInitialCompositionIfNeeded;
- (BOOL)shouldDismissAfterSend;
- (void)viewDidAppear:(BOOL)a0;

@end
