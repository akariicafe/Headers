@class NSDictionary, NSString;

@interface CKInlineReplyTransitionContext : NSObject

@property (retain, nonatomic) NSDictionary *visibleChatItemToFrameMap;
@property (copy, nonatomic) NSString *anchorChatItemGUID;
@property (nonatomic) BOOL wantsModalPresentation;
@property (nonatomic) BOOL wantsUnanimatedPresentation;
@property (nonatomic) BOOL presentWithKeyboard;
@property (nonatomic) BOOL keyboardWasUpInMainTranscript;

- (id)description;
- (void).cxx_destruct;

@end
