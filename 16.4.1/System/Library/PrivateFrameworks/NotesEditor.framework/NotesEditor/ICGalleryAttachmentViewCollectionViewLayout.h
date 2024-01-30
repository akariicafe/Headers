@class NSArray, ICAttachmentGalleryModel;

@interface ICGalleryAttachmentViewCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) ICAttachmentGalleryModel *attachmentModel;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } margins;
@property (copy, nonatomic) NSArray *itemAttributes;
@property (nonatomic) struct CGSize { double width; double height; } cachedContentSize;

+ (double)contentWidthForAttachmentGalleryModel:(id)a0 itemHeight:(double)a1 itemSpacing:(double)a2;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithAttachmentGalleryModel:(id)a0 itemHeight:(double)a1 itemSpacing:(double)a2 margins:(struct CGSize { double x0; double x1; })a3;
- (void)invalidateLayoutWithNewItemHeight:(double)a0;

@end
