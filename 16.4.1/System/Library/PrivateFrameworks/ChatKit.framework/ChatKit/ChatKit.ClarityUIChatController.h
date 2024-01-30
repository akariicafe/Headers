@class CKComposition;

@interface ChatKit.ClarityUIChatController : CKChatController {
    void /* unknown type, empty encoding */ clarityUIDelegate;
    void /* unknown type, empty encoding */ sendCompositionPublisher;
    void /* unknown type, empty encoding */ navigationBarTopInset;
    void /* unknown type, empty encoding */ sendCompositionPublisherSubscriber;
}

@property (nonatomic, readonly) BOOL shouldDisplayTextEntry;
@property (nonatomic, retain) CKComposition *composition;

+ (Class)transcriptControllerClass;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void).cxx_destruct;
- (id)_actionsToolbar;
- (BOOL)_clickyOrbEnabled;
- (id)initWithConversation:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsWithoutPalette;

@end
