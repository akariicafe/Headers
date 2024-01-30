@class PHPhotoLibrary, NSArray, NSString;

@interface PXSmartAlbumPhotoKitEditingContext : NSObject <PXSmartAlbumEditingContext>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSArray *conditionTypeValues;
@property (readonly, nonatomic) NSArray *albumValues;
@property (readonly, nonatomic) NSArray *cameraModels;
@property (readonly, nonatomic) NSArray *lensModels;
@property (readonly, nonatomic) NSArray *keywordValues;
@property (readonly, nonatomic) NSArray *personNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)ISOValuesWithFormatter:(id)a0;
- (id)focalLengthValuesWithFormatter:(id)a0;
- (id)apertureValuesWithFormatter:(id)a0;
- (id)shutterSpeedValuesWithFormatter:(id)a0;

@end
