@class NSDictionary, NSString;

@interface CKTranscriptOverlayTransitionContext : NSObject

@property (retain, nonatomic) NSDictionary *visibleChatItemToFrameMap;
@property (copy, nonatomic) NSString *anchorChatItemGUID;
@property (nonatomic) BOOL wantsModalPresentation;
@property (nonatomic) BOOL wantsUnanimatedPresentation;
@property (nonatomic) BOOL presentWithKeyboard;
@property (nonatomic) BOOL keyboardWasUpInMainTranscript;
@property (nonatomic) long long navBarContext;
@property (nonatomic) BOOL isParentChatControllerShowingBanner;

- (id)description;
- (void).cxx_destruct;

@end
