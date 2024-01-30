@class NSString, UILabel, NSAttributedString, PBFPosterGalleryPreviewView;
@protocol PBFPosterPreview;

@interface PBFPosterGalleryPreviewCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    UILabel *_titleLabel;
    struct CGSize { double width; double height; } _titleLabelSize;
}

@property (retain, nonatomic) NSString *posterTitle;
@property (retain, nonatomic) NSAttributedString *attributedPosterTitle;
@property (readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView;
@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeForCellWithTitle:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })contentSizeForCellWithTitleSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })contentSizeForSmartAlbumCellWithTitle:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })contentSizeForSmartAlbumCellWithTitleSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })heroContentSizeForCellWithTitle:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })heroContentSizeForCellWithTitleSize:(struct CGSize { double x0; double x1; })a0;
+ (double)maximumTitleHeightForFont:(id)a0;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)titleLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
