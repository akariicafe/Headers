@class NSString, NSObject;
@protocol CKConversationListCollectionViewCellDelegate;

@interface CKConversationListNewMessageCollectionViewCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate>

@property (weak, nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)embeddedTableViewCellClass;
+ (id)reuseIdentifier;

- (void)didHoverOverCell:(id)a0;
- (double)widthForDeterminingAvatarVisibility;
- (void)updateContentsForConversation:(id)a0;
- (id)embeddedNewMessageTableViewCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectedDeleteButtonForConversation:(id)a0 inCell:(id)a1;
- (void).cxx_destruct;
- (void)updateFontSize;

@end
