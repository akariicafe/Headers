@interface PULivePhotoToolControllerSpec : PUPhotoEditToolControllerSpec

@property (readonly, nonatomic) double thumbnailEdgeMaxLength;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } thumbnailCellSize;

- (void)configureThumbnailsCollectionLayout:(id)a0;

@end
