@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {
    CALayer *_frameLayer;
    CALayer *_glossLayer;
    NSMutableArray *_frameViews;
    long long _imageQuantity;
    long long _numPreviewImagesAdded;
    UILabel *_imageCountLabel;
    BOOL _allAttachmentsAreImages;
}

+ (unsigned long long)displayedFrameMaximum;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)sizeToFit;
- (id)_itemCountString;
- (void)setItemCountString:(id)a0;
- (void)setPreviewImage:(id)a0 forAttachment:(id)a1;
- (void)addPreviewImage:(id)a0;
- (BOOL)_shouldDisplayImageCountLabel;
- (id)initWithPrincipalAttachments:(id)a0;

@end
