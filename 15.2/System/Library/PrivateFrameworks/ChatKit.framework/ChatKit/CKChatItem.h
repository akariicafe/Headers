@class NSString, NSArray, UITraitCollection, NSAttributedString, CKMessagePartHighlightChatItem, IMTranscriptChatItem, CNContact, UNNotification;

@interface CKChatItem : NSObject <CKTranscriptItemLayoutProvider>

@property (readonly, nonatomic) Class chatItemClass;
@property (readonly, copy, nonatomic) NSString *layoutGroupIdentifier;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems;
@property (readonly, nonatomic) CKMessagePartHighlightChatItem *messageHighlightChatItem;
@property (retain, nonatomic) IMTranscriptChatItem *IMChatItem;
@property (retain, nonatomic) UITraitCollection *transcriptTraitCollection;
@property (nonatomic) BOOL wantsOverlayLayout;
@property (retain, nonatomic) UNNotification *notification;
@property (copy, nonatomic) NSAttributedString *transcriptText;
@property (copy, nonatomic) NSAttributedString *transcriptDrawerText;
@property (nonatomic, getter=isSizeLoaded) BOOL sizeLoaded;
@property (retain, nonatomic) NSString *transcriptIdentifier;
@property (readonly, nonatomic) NSString *layoutGroupIdentifier;
@property (readonly, nonatomic) unsigned char contiguousType;
@property (readonly, nonatomic) unsigned char attachmentContiguousType;
@property (readonly, nonatomic) BOOL hasTail;
@property (readonly, nonatomic) BOOL zOrder;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textAlignmentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } transcriptTextAlignmentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) char transcriptOrientation;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) Class customLayoutGroupProviderClass;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL displayDuringSend;
@property (readonly, nonatomic) BOOL wantsDrawerLayout;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL canCopy;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) BOOL canForward;
@property (readonly, nonatomic) BOOL canExport;
@property (readonly, nonatomic) BOOL canSendAsTextMessage;
@property (readonly, nonatomic) BOOL canInlineReply;
@property (readonly, nonatomic) BOOL canQuickSave;
@property (readonly, nonatomic) BOOL supportsInlineReplyTransition;
@property (readonly, copy, nonatomic) NSString *menuTitle;
@property (readonly, nonatomic) BOOL canAttachStickers;
@property (readonly, nonatomic) BOOL stickersSnapToPoint;
@property (readonly, nonatomic) struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } balloonDescriptor;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long syndicationType;

+ (id)chatItemWithNotification:(id)a0 balloonMaxWidth:(double)a1 otherMaxWidth:(double)a2;
+ (id)chatItemWithIMChatItem:(id)a0 balloonMaxWidth:(double)a1 otherMaxWidth:(double)a2 transcriptTraitCollection:(id)a3 overlayLayout:(BOOL)a4;

- (unsigned long long)layoutType;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (BOOL)itemIsReplyCount;
- (BOOL)itemIsFromMe;
- (void)unloadSize;
- (BOOL)canSave;
- (id)loadTranscriptDrawerText;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)description;
- (BOOL)itemIsReplyFromMe;
- (id)syndicationBehaviorString;
- (id)initWithNotification:(id)a0 maxWidth:(double)a1;
- (void)_setSizeForTesting:(struct CGSize { double x0; double x1; })a0;
- (BOOL)itemIsReply;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)layoutItemSpacingForReplyItemWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)layoutItemSpacingForReplyContextPreviewWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)layoutItemSpacingForReplyThreadOriginatorWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (double)_additionalTopPaddingForChatItem:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 prevChatItem:(id)a3 layoutEnvironment:(id)a4;
- (double)_additionalBottomPaddingForChatItem:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 prevChatItem:(id)a3 layoutEnvironment:(id)a4;
- (BOOL)previousReplyCount:(unsigned long long)a0 allDatasourceItems:(id)a1 isOccludedForAssociatedSize:(struct CGSize { double x0; double x1; })a2 outMaxY:(double *)a3;
- (BOOL)previousPhotoActionItemIsOccluded:(unsigned long long)a0 allDatasourceItems:(id)a1;
- (BOOL)itemIsReplyContextPreview;
- (id)layoutItemWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2;
- (BOOL)itemIsThreadOriginator;
- (void)unloadTranscriptText;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTranscriptText;

@end
