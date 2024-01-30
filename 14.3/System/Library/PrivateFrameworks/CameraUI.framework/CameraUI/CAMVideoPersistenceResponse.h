@class NSString, NSDictionary, NSURL, NSDate, UIImage;

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, copy, nonatomic) NSString *stillPersistenceUUID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillDisplayTime;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } finalExpectedPixelSize;
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
- (id)initWithUUID:(id)a0 captureSession:(unsigned short)a1 url:(id)a2 creationDate:(id)a3 scrubberImage:(id)a4 finalExpectedPixelSize:(struct CGSize { double x0; double x1; })a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 stillPersistenceUUID:(id)a7 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8 coordinationInfo:(id)a9;

@end
