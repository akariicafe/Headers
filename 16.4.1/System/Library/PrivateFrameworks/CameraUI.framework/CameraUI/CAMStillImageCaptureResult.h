@class CAMCaptureCoordinationInfo, NSString, NSDictionary, NSArray, AVCapturePhoto, NSDate, NSError;

@interface CAMStillImageCaptureResult : NSObject

@property (readonly, nonatomic) struct __IOSurface { } *stillImageFullsizeSurface;
@property (readonly, nonatomic) unsigned long long stillImageFullsizeSurfaceSize;
@property (readonly, nonatomic) struct __IOSurface { } *stillImageUnfilteredPreviewSurface;
@property (readonly, nonatomic) struct __IOSurface { } *stillImageFilteredPreviewSurface;
@property (readonly, nonatomic) AVCapturePhoto *capturePhoto;
@property (readonly, copy, nonatomic) NSString *deferredPhotoIdentifier;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *compactMetadata;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL shouldPersistAdjustmentSidecar;
@property (readonly, nonatomic) NSArray *adjustmentFilters;
@property (readonly, nonatomic) BOOL representsDeferredFilteredProxy;
@property (readonly, copy, nonatomic) NSString *persistenceUUID;
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo;
@property (readonly, copy, nonatomic) NSString *imageGroupIdentifier;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) long long semanticEnhancement;

- (id)initWithCaptureDeferredPhotoProxy:(id)a0 expectingPairedVideo:(BOOL)a1 adjustmentFilters:(id)a2 filteredPreviewSurface:(struct __IOSurface { } *)a3 shouldPersistAdjustmentSidecar:(BOOL)a4 persistenceUUID:(id)a5 coordinationInfo:(id)a6 semanticEnhancement:(long long)a7 error:(id)a8;
- (id)_captureDateFromMetadata:(id)a0;
- (id)initWithCapturePhoto:(id)a0 expectingPairedVideo:(BOOL)a1 adjustmentFilters:(id)a2 filteredPreviewSurface:(struct __IOSurface { } *)a3 shouldPersistAdjustmentSidecar:(BOOL)a4 persistenceUUID:(id)a5 coordinationInfo:(id)a6 semanticEnhancement:(long long)a7 error:(id)a8;
- (void)dealloc;
- (id)compactMetadataWithSecondaryMakerNote:(id)a0;
- (id)initWithFullsizeSurface:(struct __IOSurface { } *)a0 size:(unsigned long long)a1 unfilteredPreviewSurface:(struct __IOSurface { } *)a2 filteredPreviewSurface:(struct __IOSurface { } *)a3 metadata:(id)a4 expectingPairedVideo:(BOOL)a5 shouldPersistAdjustmentSidecar:(BOOL)a6 adjustmentFilters:(id)a7 persistenceUUID:(id)a8 coordinationInfo:(id)a9 error:(id)a10;
- (id)description;
- (void).cxx_destruct;

@end
