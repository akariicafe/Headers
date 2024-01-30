@class PHAsset;

@interface SearchUIPhotosActionProvider : SearchUIActionProvider

@property (retain, nonatomic) PHAsset *asset;

+ (BOOL)rowModelIsPhotoResult:(id)a0;

- (id)itemProvider;
- (void).cxx_destruct;
- (BOOL)supportsShare;
- (BOOL)supportsCopy;

@end
