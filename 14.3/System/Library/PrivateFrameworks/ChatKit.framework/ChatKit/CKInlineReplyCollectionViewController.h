@class NSDictionary;

@interface CKInlineReplyCollectionViewController : CKTranscriptCollectionViewController

@property (retain, nonatomic) NSDictionary *currentFrameMapForNextReload;
@property (retain, nonatomic) NSDictionary *targetFrameMapForAnimateOut;
@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn;
@property (nonatomic, getter=isAnimatingOut) BOOL animatingOut;

+ (id)chatItemsDidChangeNotification;

- (void).cxx_destruct;
- (BOOL)_canUseOpaqueMask;
- (void)setScrollAnchor:(double)a0;
- (void)didMoveToParentViewController:(id)a0;
- (id)imChatItems;
- (id)transcriptBackgroundColor;
- (BOOL)isInline;
- (void)viewDidAppearDeferredSetup;
- (id)initWithConversation:(id)a0 delegate:(id)a1 notifications:(id)a2 balloonMaxWidth:(double)a3 marginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (void)configureCell:(id)a0 forItemAtIndexPath:(id)a1;
- (id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)a0;
- (void)loadEarlierMessagesForConversation;
- (void)loadRecentMessagesForConversation;
- (id)overrideCurrentFrameMapForLayout:(id)a0;
- (id)overrideTargetFrameMapForLayout:(id)a0;
- (void)setCollectionViewCurrentFrames:(id)a0;
- (void)setCollectionViewTargetFrames:(id)a0;

@end
