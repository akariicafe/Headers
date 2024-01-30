@class UIImageView;

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailImageView;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)configureWithThumbnail:(id)a0 fileURL:(id)a1;
- (void).cxx_destruct;
- (void)configureWithAttachmentItem:(id)a0;

@end
