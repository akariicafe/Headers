@class NSURL;

@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject

@property (readonly) long long uniqueID;
@property (readonly, getter=isTorchEnabled) BOOL torchEnabled;
@property (readonly) NSURL *movieURL;
@property (readonly) NSURL *spatialOverCaptureURL;
@property (readonly) struct { int width; int height; } movieDimensions;

+ (id)movieRecordingResolvedSettingsWithUniqueID:(long long)a0 torchEnabled:(BOOL)a1 movieURL:(id)a2 spatialOverCaptureURL:(id)a3 movieDimensions:(struct { int x0; int x1; })a4;

- (id)description;
- (void)dealloc;
- (id)debugDescription;
- (id)_initWithUniqueID:(long long)a0 torchEnabled:(BOOL)a1 movieURL:(id)a2 spatialOverCaptureURL:(id)a3 movieDimensions:(struct { int x0; int x1; })a4;

@end
