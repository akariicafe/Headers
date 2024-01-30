@class NSString, NSDictionary, NSURL, NSDate, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>

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
- (id)initWithUUID:(id)a0 captureSession:(unsigned short)a1 url:(id)a2 captureDate:(id)a3 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 stillPersistenceUUID:(id)a5 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 reason:(long long)a7 videoZoomFactor:(double)a8 finalExpectedPixelSize:(struct CGSize { double x0; double x1; })a9 imageWellImage:(id)a10 previewImage:(id)a11 coordinationInfo:(id)a12;

@end
