@class NSString, NSDictionary, UIImage, NSDate, NSURL;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>

@property (readonly, copy, nonatomic) NSString *persistenceUUID;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) unsigned long long burstRepresentedCount;
@property (readonly, nonatomic) UIImage *imageWellImage;
@property (readonly, nonatomic) UIImage *textAnalysisImage;
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) struct CGSize { double width; double height; } finalExpectedPixelSize;
@property (readonly, nonatomic) long long captureID;
@property (readonly, nonatomic) long long semanticEnhanceScene;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } irisStillDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0 captureSession:(unsigned short)a1 captureDate:(id)a2 metadata:(id)a3 burstIdentifier:(id)a4 burstRepresentedCount:(unsigned long long)a5 imageWellImage:(id)a6 textAnalysisImage:(id)a7 coordinationInfo:(id)a8 finalExpectedPixelSize:(struct CGSize { double x0; double x1; })a9 expectingPairedVideo:(BOOL)a10 captureID:(long long)a11 semanticEnhanceScene:(long long)a12;
- (void).cxx_destruct;

@end
