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

- (void)sizeToFit;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_itemCountString;
- (void)setItemCountString:(id)a0;
- (BOOL)_shouldDisplayImageCountLabel;
- (void)addPreviewImage:(id)a0;
- (id)initWithPrincipalAttachments:(id)a0;
- (void)setPreviewImage:(id)a0 forAttachment:(id)a1;

@end
