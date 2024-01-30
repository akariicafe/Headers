@class UIImage, PXPeopleFaceCropFetchOptions, NSManagedObjectID;

@interface PXPeopleFaceCropFetchResult : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (readonly, nonatomic) BOOL isCropped;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) PXPeopleFaceCropFetchOptions *options;

- (id)description;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 assetObjectID:(id)a1 faceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isCropped:(BOOL)a3 isDegraded:(BOOL)a4 options:(id)a5;

@end
