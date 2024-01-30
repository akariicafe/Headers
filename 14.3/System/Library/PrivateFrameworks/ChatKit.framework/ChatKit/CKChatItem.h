@class IMTranscriptChatItem, NSString, UNNotification, CNContact, NSAttributedString, UITraitCollection;

@interface CKChatItem : NSObject

@property (retain, nonatomic) IMTranscriptChatItem *IMChatItem;
@property (retain, nonatomic) UITraitCollection *transcriptTraitCollection;
@property (nonatomic) BOOL wantsOverlayLayout;
@property (retain, nonatomic) UNNotification *notification;
@property (copy, nonatomic) NSAttributedString *transcriptText;
@property (copy, nonatomic) NSAttributedString *transcriptDrawerText;
@property (nonatomic, getter=isSizeLoaded) BOOL sizeLoaded;
@property (retain, nonatomic) NSString *transcriptIdentifier;
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
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL displayDuringSend;
@property (readonly, nonatomic) BOOL wantsDrawerLayout;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL canCopy;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canForward;
@property (readonly, nonatomic) BOOL canExport;
@property (readonly, nonatomic) BOOL canSendAsTextMessage;
@property (readonly, nonatomic) BOOL canInlineReply;
@property (readonly, copy, nonatomic) NSString *menuTitle;
@property (readonly, nonatomic) BOOL canAttachStickers;
@property (readonly, nonatomic) BOOL stickersSnapToPoint;
@property (readonly, nonatomic) struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } balloonDescriptor;

+ (id)chatItemWithIMChatItem:(id)a0 balloonMaxWidth:(double)a1 otherMaxWidth:(double)a2 transcriptTraitCollection:(id)a3 overlayLayout:(BOOL)a4;
+ (id)chatItemWithNotification:(id)a0 balloonMaxWidth:(double)a1 otherMaxWidth:(double)a2;

- (BOOL)canSave;
- (void).cxx_destruct;
- (id)layoutItemSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;
- (id)loadTranscriptDrawerText;
- (unsigned long long)layoutType;
- (BOOL)itemIsFromMe;
- (id)supplementaryItemsWithLayoutEnvironment:(id)a0;
- (id)layoutGroupForEnvironment:(id)a0;
- (BOOL)itemIsReply;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsThreadOriginator;
- (void)unloadSize;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)description;
- (id)initWithNotification:(id)a0 maxWidth:(double)a1;
- (void)_setSizeForTesting:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)itemIsReplyFromMe;
- (void)unloadTranscriptText;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (id)visibleAssociatedMessageChatItems;
- (Class)collectionViewCellClass;
- (id)loadTranscriptText;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)layoutGroupSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;
- (BOOL)wantsAvatarViewForLayoutEnvironment:(id)a0;
- (BOOL)itemIsReplyCount;

@end
