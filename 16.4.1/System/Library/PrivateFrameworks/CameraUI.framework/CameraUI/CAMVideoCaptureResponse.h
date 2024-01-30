@class NSString, NSDictionary, NSURL, NSDate, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>

@property (readonly, nonatomic) long long captureMode;
@property (readonly, copy, nonatomic) NSString *persistenceUUID;
@property (readonly, copy, nonatomic) NSURL *localPersistenceURL;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) BOOL stoppedUnexpectedly;
@property (readonly, nonatomic) double videoZoomFactor;
@property (readonly, nonatomic) UIImage *imageWellImage;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } finalExpectedPixelSize;
@property (readonly, copy, nonatomic) NSString *stillPersistenceUUID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillDisplayTime;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } irisStillDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 captureMode:(long long)a1 captureSession:(unsigned short)a2 url:(id)a3 captureDate:(id)a4 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 stillPersistenceUUID:(id)a6 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 reason:(long long)a8 videoZoomFactor:(double)a9 finalExpectedPixelSize:(struct CGSize { double x0; double x1; })a10 imageWellImage:(id)a11 previewImage:(id)a12 coordinationInfo:(id)a13;

@end
