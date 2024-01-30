@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject

@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) PLManagedAsset *asset;

- (void).cxx_destruct;

@end
