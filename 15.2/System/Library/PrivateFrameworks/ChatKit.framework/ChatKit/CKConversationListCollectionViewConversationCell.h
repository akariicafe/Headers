@class NSString, _CKCollectionViewTapGestureRecognizer, NSObject;
@protocol CKConversationListCollectionViewCellDelegate;

@interface CKConversationListCollectionViewConversationCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate, CKConversationListCell>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (weak, nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate;
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (retain, nonatomic) _CKCollectionViewTapGestureRecognizer *avatarViewTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)conversationCellClassForCurrentSizeCategory;
+ (id)identifierForConversation:(id)a0;
+ (Class)embeddedTableViewCellClass;
+ (id)reuseIdentifier;
+ (double)cellHeightForDisplayScale:(double)a0;

- (id)avatarView;
- (void)layoutSubviews;
- (void)didHoverOverCell:(id)a0;
- (double)widthForDeterminingAvatarVisibility;
- (void)avatarHeaderWasTappedForConversation:(id)a0 inCell:(id)a1;
- (id)embeddedConversationTableViewCell;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)avatarView:(id)a0 shouldShowContact:(id)a1;
- (void)forceUnreadIndicatorVisibility:(BOOL)a0 forConversation:(id)a1 animated:(BOOL)a2;
- (void)updateContentsForConversation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectedDeleteButtonForConversation:(id)a0 inCell:(id)a1;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void).cxx_destruct;

@end
