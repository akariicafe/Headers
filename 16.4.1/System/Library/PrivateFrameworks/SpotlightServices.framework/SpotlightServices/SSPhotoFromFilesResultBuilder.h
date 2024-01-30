@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (id)appBundleId;
- (id)buildCommand;
- (id)buildPreviewCommand;
- (id)buildThumbnail;

@end
