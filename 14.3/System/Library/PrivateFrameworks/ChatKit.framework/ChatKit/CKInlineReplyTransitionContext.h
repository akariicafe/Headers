@class NSDictionary, NSString;

@interface CKInlineReplyTransitionContext : NSObject

@property (retain, nonatomic) NSDictionary *visibleChatItemToFrameMap;
@property (copy, nonatomic) NSString *anchorChatItemGUID;
@property (nonatomic) BOOL presentWithKeyboard;
@property (nonatomic) BOOL keyboardWasUpInMainTranscript;

- (void).cxx_destruct;
- (id)description;

@end
