@class NSDictionary;

@interface CKInlineReplyCollectionViewController : CKTranscriptCollectionViewController

@property (retain, nonatomic) NSDictionary *currentFrameMapForNextReload;
@property (retain, nonatomic) NSDictionary *targetFrameMapForAnimateOut;
@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn;
@property (nonatomic, getter=isAnimatingOut) BOOL animatingOut;

+ (id)chatItemsDidChangeNotification;

- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isModal;
- (void)setCollectionViewCurrentFrames:(id)a0;
- (BOOL)_canUseOpaqueMask;
- (id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)a0;
- (void)configureCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)fetchEarlierMessagesForConversation:(id /* block */)a0;
- (void)fetchRecentMessagesForConversation:(id /* block */)a0;
- (id)imChatItems;
- (id)initWithConversation:(id)a0 delegate:(id)a1 notifications:(id)a2 balloonMaxWidth:(double)a3 marginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 collectionViewSize:(struct CGSize { double x0; double x1; })a5;
- (BOOL)isInline;
- (void)loadEarlierMessagesForConversation;
- (void)loadRecentMessagesForConversation;
- (id)overrideCurrentFrameMapForLayout:(id)a0;
- (id)overrideTargetFrameMapForLayout:(id)a0;
- (void)setCollectionViewTargetFrames:(id)a0;
- (void)setScrollAnchor:(double)a0;
- (BOOL)shouldEndShowingEditHistoryOnViewDisappearance;
- (id)transcriptBackgroundColor;
- (void)viewDidAppearDeferredSetup;

@end
