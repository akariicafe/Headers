@interface DCIMAVMetadataUtilities : NSObject

+ (id)metadataItemForTimelapse;
+ (BOOL)isTimelapseAsset:(id)a0;
+ (id)_captureModeStringFromAsset:(id)a0;
+ (id)_captureModeStringFromAssetTrack:(id)a0;
+ (id)montageStringForAsset:(id)a0;

@end
