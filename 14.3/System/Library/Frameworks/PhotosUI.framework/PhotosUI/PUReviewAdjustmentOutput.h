@class NSURL;

@interface PUReviewAdjustmentOutput : NSObject

@property (retain, nonatomic, setter=_setRenderedImageFileURL:) NSURL *renderedImageFileURL;
@property (retain, nonatomic, setter=_setRenderedVideoFileURL:) NSURL *renderedVideoFileURL;
@property (nonatomic, setter=_setAdjustmentInputBaseVersion:) long long _adjustmentInputBaseVersion;
@property (retain, nonatomic, setter=_setBaseImageURL:) NSURL *_baseImageURL;
@property (retain, nonatomic, setter=_setBaseVideoURL:) NSURL *_baseVideoURL;

- (void).cxx_destruct;

@end
