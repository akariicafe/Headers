@class NSArray, NSString;

@interface PXSmartAlbumCameraModelCondition : PXSmartAlbumEXIFCondition {
    NSArray *_cameraModels;
}

@property (readonly, nonatomic) NSArray *cameraModels;
@property (retain, nonatomic) NSString *cameraModel;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
