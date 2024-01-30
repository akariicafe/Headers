@class UIImage;

@interface PXPeopleFaceTileImageRequestResult : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (readonly, nonatomic) BOOL isDegraded;
@property (retain, nonatomic) id originalObjectID;
@property (retain, nonatomic) id assetObjectID;
@property (nonatomic) struct PXFaceTileImageParams { struct CGSize { double width; double height; } targetSize; unsigned long long cropFactor; unsigned long long style; BOOL cropBounded; } params;
@property (nonatomic) BOOL isVeryLowQuality;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;

- (void).cxx_destruct;
- (id)description;
- (id)initWithImage:(id)a0 faceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isDegraded:(BOOL)a2;

@end
