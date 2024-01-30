@interface PICinematicVideoUtilities : NSObject

+ (BOOL)assetIsCinematicVideo:(id)a0;
+ (id)cinematicMetadataFromAsset:(id)a0;
+ (BOOL)currentSystemCanRenderAsset:(id)a0;
+ (unsigned long long)currentSystemRenderingVersion;
+ (unsigned long long)renderingVersionFromAsset:(id)a0 error:(out id *)a1;

@end
