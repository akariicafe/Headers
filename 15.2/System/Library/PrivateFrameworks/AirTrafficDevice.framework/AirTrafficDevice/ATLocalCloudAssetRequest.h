@class ATAsset, NSFileHandle;

@interface ATLocalCloudAssetRequest : NSObject

@property (retain, nonatomic) ATAsset *asset;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) double startTime;

- (void).cxx_destruct;

@end
