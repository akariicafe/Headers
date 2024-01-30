@class NSString, NSMutableDictionary;

@interface ICRSCameraAsset : NSObject

@property (retain, nonatomic) NSMutableDictionary *icAssetDict;
@property (copy, nonatomic) NSString *plRelatedUUID;
@property (nonatomic) unsigned long long icAssetHandle;
@property (readonly) unsigned long long unsignedIntegerValue;

- (id)modificationDate;
- (unsigned long long)fileSize;
- (unsigned long long)thumbnailSize;
- (id)filename;
- (BOOL)timeLapse;
- (BOOL)hasThumbnail;
- (unsigned long long)orientation;
- (id)groupUUID;
- (id)spatialOverCaptureGroupID;
- (id)originatingAssetID;
- (double)duration;
- (id)captureDate;
- (unsigned long long)conversionGroup;
- (id)assetDictionary;
- (id)burstUUID;
- (BOOL)firstPicked;
- (BOOL)burstPicked;
- (BOOL)burstFavorite;
- (id)createdFilename;
- (id)relatedUUID;
- (BOOL)highFramerate;
- (void)dealloc;
- (id)originalFilename;
- (id)initWithICRSCameraAssetDictionary:(id)a0;
- (struct CGSize { double x0; double x1; })mediaDimensions;
- (struct CGSize { double x0; double x1; })thumbnailDimensions;
- (long long)compareCameraAsset:(id)a0;

@end
