@class CKEntity, IMHandle, NSDate;

@interface CKBalloonChatItem : CKChatItem {
    CKEntity *_entity;
}

@property (readonly, nonatomic) char balloonOrientation;
@property (readonly, nonatomic) unsigned long long balloonCorners;
@property (readonly, nonatomic) char tailShape;
@property (readonly, nonatomic) char balloonShape;
@property (readonly, nonatomic) Class balloonViewClass;
@property (readonly, nonatomic) Class impactBalloonViewClass;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) BOOL shouldCacheSize;
@property (readonly, nonatomic) BOOL isBlackholed;
@property (readonly, nonatomic) BOOL isMultilineText;

- (BOOL)isEditable;
- (id)contact;
- (void).cxx_destruct;
- (id)layoutItemSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;
- (char)transcriptOrientation;
- (BOOL)displayDuringSend;
- (id)loadTranscriptDrawerText;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (id)cellIdentifier;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)configureBalloonView:(id)a0;
- (id)description;
- (BOOL)needsPreservedAspectRatio;
- (BOOL)needsAdjustedTextAlignmentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transcriptTextAlignmentInsets;
- (BOOL)wantsDrawerLayout;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (Class)collectionViewCellClass;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)_shouldShowContactPhotosInTranscript;
- (BOOL)wantsAvatarViewForLayoutEnvironment:(id)a0;

@end
