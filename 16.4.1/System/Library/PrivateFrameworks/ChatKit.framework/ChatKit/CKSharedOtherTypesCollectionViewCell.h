@class UIImageView;

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailImageView;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithThumbnail:(id)a0 fileURL:(id)a1;
- (void)configureWithAttachmentItem:(id)a0;

@end
