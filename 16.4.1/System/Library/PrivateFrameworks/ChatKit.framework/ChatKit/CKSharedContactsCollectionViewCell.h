@class CNAvatarView;

@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) CNAvatarView *avatarView;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithContact:(id)a0;

@end
