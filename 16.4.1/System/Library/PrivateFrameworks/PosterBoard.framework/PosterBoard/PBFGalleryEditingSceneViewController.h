@class NSString, UIImage, UIView, PRPosterDescriptorGalleryOptions, PBFGalleryOptions;

@interface PBFGalleryEditingSceneViewController : PREditingSceneViewController

@property (retain, nonatomic) PBFGalleryOptions *galleryOptions;
@property (retain, nonatomic) PRPosterDescriptorGalleryOptions *descriptorGalleryOptions;
@property (copy, nonatomic) NSString *galleryPreviewUniqueIdentifier;
@property (retain, nonatomic) UIImage *galleryPreviewImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } galleryPreviewFrame;
@property (nonatomic) double galleryPreviewCornerRadius;
@property (copy, nonatomic) NSString *galleryPreviewType;
@property (nonatomic) unsigned long long galleryPresentationStyle;
@property (retain, nonatomic) UIView *galleryPreviewComplicationsView;
@property (nonatomic) long long galleryDismissalAction;

- (void).cxx_destruct;

@end
