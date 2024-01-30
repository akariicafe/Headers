@class UIImage, NSData, NSURL;

@interface PUReviewAdjustmentInput : NSObject

@property (retain, nonatomic, setter=_setCurrentPreviewImage:) UIImage *currentPreviewImage;
@property (retain, nonatomic, setter=_setKnownAdjustmentData:) NSData *knownAdjustmentData;
@property (nonatomic, setter=_setBaseImageVersion:) long long adjustmentBaseVersion;
@property (nonatomic, setter=_setBaseImageFileURL:) NSURL *baseImageFileURL;
@property (nonatomic, setter=_setBaseVideoFileURL:) NSURL *baseVideoFileURL;

- (void).cxx_destruct;

@end
