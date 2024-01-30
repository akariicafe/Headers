@class NSString, UILabel, PBFPosterGalleryViewSpec, PBFPosterGalleryPreviewView;
@protocol PBFPosterPreview;

@interface PBFPosterGalleryPreviewWithDescriptionCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    UILabel *_posterDescriptionLabel;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } posterViewFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } posterDescriptionLabelFrame; struct CGSize { double width; double height; } intrinsicContentSize; } _metrics;
    PBFPosterGalleryViewSpec *_spec;
}

@property (retain, nonatomic) NSString *posterDescription;
@property (readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView;
@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToWindow;
- (void)prepareForReuse;
- (id)spec;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGSize { double x0; double x1; } x2; })metrics;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (id)posterDescriptionLabel;

@end
