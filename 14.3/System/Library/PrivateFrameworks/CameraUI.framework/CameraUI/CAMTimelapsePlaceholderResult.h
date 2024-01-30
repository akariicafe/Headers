@class NSString, NSDictionary, NSURL, NSDate, UIImage;

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible>

@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long captureOrientation;
@property (readonly, nonatomic) long long captureDevice;
@property (readonly, nonatomic) struct CGSize { double width; double height; } videoDimensions;
@property (readonly, nonatomic) double timelapseDuration;
@property (readonly, nonatomic) void *previewImageSurface;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } finalExpectedPixelSize;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } irisStillDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssetUUID:(id)a0 captureSession:(unsigned short)a1 creationDate:(id)a2 captureOrientation:(long long)a3 captureDevice:(long long)a4 videoDimensions:(struct CGSize { double x0; double x1; })a5 duration:(double)a6 previewImageSurface:(void *)a7;

@end
