@class UIImage, NSDictionary, NSArray;

@interface VUIOverlayBackgroundMaterialImagesOperation : NSOperation

@property (retain, nonatomic) UIImage *sourceBackgroundImage;
@property (retain, nonatomic) UIImage *resizedSourceBackgroundImage;
@property (copy, nonatomic) NSDictionary *overlayMaterialImageByIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } resizedBackgroundImageSize;
@property (copy, nonatomic) NSArray *overlayMaterialRequests;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSourceBackgroundImage:(id)a0;
- (id)_blurredMaterialImageWithSourceBackgroundImage:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
