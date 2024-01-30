@class NSString, NSArray, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMCaptureAdjustmentProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest> {
    long long _aspectRatio;
}

@property (readonly, copy, nonatomic) NSString *EV0PersistenceUUID;
@property (readonly, copy, nonatomic) NSString *timelapseIdentifier;
@property (readonly, nonatomic) long long effectFilterType;
@property (readonly, nonatomic) long long lightingEffectType;
@property (readonly, nonatomic) long long aspectRatioCrop;
@property (readonly, nonatomic) unsigned long long maximumBurstLength;
@property (readonly, nonatomic) long long flashMode;
@property (readonly, nonatomic) long long hdrMode;
@property (readonly, nonatomic) long long irisMode;
@property (readonly, nonatomic) BOOL wantsPortraitEffect;
@property (readonly, nonatomic) NSArray *adjustmentFilters;
@property (readonly, nonatomic) NSArray *originalFilters;
@property (readonly, nonatomic) long long photoQualityPrioritization;
@property (readonly, nonatomic) BOOL wantsAutoDualCameraFusion;
@property (readonly, nonatomic) BOOL wantsSemanticSceneFilter;
@property (readonly, nonatomic) BOOL wantsAudioForCapture;
@property (readonly, nonatomic) BOOL wantsSquareCrop;
@property (readonly, nonatomic) BOOL wantsHighResolutionStills;
@property (readonly, nonatomic) BOOL stillDuringVideo;
@property (readonly, nonatomic) long long ctmCaptureType;
@property (readonly, nonatomic, getter=isCTMVideo) BOOL CTMVideo;
@property (readonly, nonatomic) BOOL wantsSpatialOverCapture;
@property (readonly, nonatomic) long long lowLightMode;
@property (readonly, nonatomic) struct CGSize { double width; double height; } desiredPreviewSize;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, copy, nonatomic) NSString *irisIdentifier;
@property (readonly, copy, nonatomic) NSURL *localVideoDestinationURL;
@property (readonly, copy, nonatomic) NSURL *localCTMVideoDestinationURL;
@property (readonly, copy, nonatomic) NSURL *localSpatialOverCaptureVideoDestinationURL;
@property (readonly, copy, nonatomic) NSURL *localCTMSpatialOverCaptureVideoDestinationURL;
@property (readonly, copy, nonatomic) NSString *videoPersistenceUUID;
@property (readonly, copy, nonatomic) NSString *EV0IrisIdentifier;
@property (readonly, copy, nonatomic) NSURL *EV0LocalVideoDestinationURL;
@property (readonly, copy, nonatomic) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL;
@property (readonly, copy, nonatomic) NSString *EV0VideoPersistenceUUID;
@property (readonly, nonatomic) unsigned long long userInitiationTime;
@property (readonly, nonatomic) double loggingVideoZoomFactor;
@property (readonly, nonatomic) long long loggingZoomInteractionType;
@property (readonly, weak, nonatomic) id<CAMStillImageCaptureRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldProtectPersistenceForVideo;
- (id)irisIdentifierForEV0:(BOOL)a0;
- (BOOL)hasAdjustments;
- (BOOL)isEV0LocalVideoDestinationURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)irisVideoPersistenceUUIDForEV0:(BOOL)a0;
- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1;
- (id)irisLocalVideoDestinationURLForEV0:(BOOL)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(BOOL)a0;
- (BOOL)isLocalSpatialOverCaptureVideoDestinationURL:(id)a0;
- (id)captureRequest;
- (id)irisStillImagePersistenceUUIDForEV0:(BOOL)a0;

@end
