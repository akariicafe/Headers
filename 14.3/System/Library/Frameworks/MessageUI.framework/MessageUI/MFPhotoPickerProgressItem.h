@class AVAssetExportSession;

@interface MFPhotoPickerProgressItem : NSObject

@property (nonatomic) double progress;
@property (nonatomic) int imageRequestID;
@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (void).cxx_destruct;
- (id)description;

@end
