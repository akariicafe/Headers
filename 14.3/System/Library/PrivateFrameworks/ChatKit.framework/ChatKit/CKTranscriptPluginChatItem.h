@class NSString, NSArray, IMTranscriptPluginChatItem;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem

@property (retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem;
@property (readonly, nonatomic) BOOL isHandwriting;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) BOOL isBusiness;
@property (readonly, nonatomic) BOOL wantsTranscriptGroupMonograms;
@property (readonly, nonatomic) BOOL wantsBalloonGradient;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL wantsOutline;
@property (readonly, nonatomic) IMTranscriptPluginChatItem *IMChatItem;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;
@property (nonatomic) BOOL isAppearing;

- (id)contentViewControllerForContext:(id)a0;
- (id)extensibleViewForContext:(id)a0;
- (id)extensibleViewControllerForContext:(id)a0;
- (void)relinquishBalloonControllerForContext:(id)a0;
- (id)contact;
- (void)configureWithConversationID:(id)a0 recipients:(id)a1 isBusiness:(BOOL)a2 context:(id)a3;
- (void)releaseBalloonControllerIfNeededForContext:(id)a0;
- (id)pluginDisplayContainerForContext:(id)a0;
- (void).cxx_destruct;
- (id)layoutItemSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textAlignmentInsets;
- (char)transcriptOrientation;
- (id)dragItemProvider;
- (id)loadTranscriptDrawerText;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (id)sender;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)menuTitle;
- (id)cellIdentifier;
- (BOOL)canCopy;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (Class)balloonViewClass;
- (BOOL)canForward;
- (id)message;
- (id)balloonControllerForContext:(id)a0;
- (BOOL)canInlineReply;
- (id)compositionWithContext:(id)a0;
- (void)_configureBalloonController:(id)a0 conversationID:(id)a1 recipients:(id)a2 isBusiness:(BOOL)a3;
- (void)_cacheConversationID:(id)a0 recipients:(id)a1 isBusiness:(BOOL)a2;
- (id)snapshotGUIDForPluginPayload:(id)a0;
- (BOOL)shouldSnapshot;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)layoutGroupSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;
- (void)performHostAppResumeWithContext:(id)a0;

@end
