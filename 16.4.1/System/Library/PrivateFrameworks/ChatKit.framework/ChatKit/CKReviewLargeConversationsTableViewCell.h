@class IMChat, CNAvatarView;

@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell

@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) CNAvatarView *avatarView;

+ (double)requestedHeight;
+ (struct CGSize { double x0; double x1; })leftHandSideViewSize;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setModelObject:(id)a0;
- (id)leftHandSideView;

@end
