@class UIImageView;

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailImageView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithThumbnail:(id)a0 fileURL:(id)a1;
- (void)configureWithAttachmentItem:(id)a0;

@end
