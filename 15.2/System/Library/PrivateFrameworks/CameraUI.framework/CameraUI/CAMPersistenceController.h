@class CAMBurstController, CAMIrisVideoController, NSString, CAMPowerController, CAMThumbnailGenerator, NSMutableDictionary, NSMutableArray, CAMLocationController, NSObject, CAMProtectionController, NSMapTable;
@protocol OS_dispatch_queue, CAMPersistenceResultDelegate;

@interface CAMPersistenceController : NSObject <CAMStillImagePersistenceCoordinatorDelegate, CAMVideoPersistenceCoordinationDelegate, CAMCaptureService> {
    struct { BOOL respondsToDidCompleteAllLocalPersistenceForRequest; } _resultDelegateFlags;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_localPersistenceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remotePersistenceQueue;
@property (readonly, nonatomic) CAMThumbnailGenerator *_localPersistenceThumbnailGenerator;
@property (readonly, nonatomic) CAMThumbnailGenerator *_remotePersistenceThumbnailGenerator;
@property (readonly, nonatomic) NSMutableArray *_pendingLocalPersistenceWrappers;
@property (readonly, nonatomic) NSMutableArray *_pendingRemotePersistenceWrappers;
@property (readonly, nonatomic) CAMLocationController *_locationController;
@property (readonly, nonatomic) CAMProtectionController *_protectionController;
@property (readonly, nonatomic) CAMPowerController *_powerController;
@property (readonly, nonatomic) CAMBurstController *_burstController;
@property (readonly, nonatomic) CAMIrisVideoController *_irisVideoController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultDelegateIsolationQueue;
@property (readonly, nonatomic) BOOL resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_coordinationQueue;
@property (readonly, nonatomic) NSMapTable *_coordinationQueueGroupsByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_coordinationQueue_stillImagePersistenceCoordinators;
@property (readonly, nonatomic) NSMutableDictionary *_coordinationQueue_videoPersistenceCoordinators;
@property (weak, nonatomic) id<CAMPersistenceResultDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoMetadataDateFormatter;
+ (id)delimiterForIncomingAssetFilenames;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)a0 captureTime:(double)a1 extension:(id)a2;
+ (id)uniquePathForAssetWithUUID:(id)a0 captureTime:(double)a1 extension:(id)a2 usingIncomingDirectory:(BOOL)a3;
+ (id)_pathForIncomingDirectory;
+ (id)spatialOverCapturePathForPath:(id)a0;
+ (id)clientVideoMetadataForRequest:(id)a0 withCreationDate:(id)a1 isEV0ForHDR:(BOOL)a2 livePhotoIdentifierOverride:(id)a3;
+ (id)clientVideoMetadataForLocation:(id)a0 withCreationDate:(id)a1;

- (void)stillImageRequestDidCompleteCapture:(id)a0 error:(id)a1;
- (id)_extensionForUniformType:(id)a0;
- (void)emptyLocalPersistenceStorageWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)videoPersistenceCoordinator:(id)a0 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)a1 request:(id)a2;
- (void)stillImageRequest:(id)a0 didCompleteVideoCaptureWithResult:(id)a1;
- (void)stillImagePersistenceCoordinator:(id)a0 requestsRemotePersistenceForLocalPersistenceResult:(id)a1 filteredLocalResult:(id)a2 spatialOverCaptureLocalResult:(id)a3 request:(id)a4 powerAssertionReason:(unsigned int)a5;
- (id)_videoPersistenceUUIDForRequest:(id)a0 withResult:(id)a1;
- (id)_uniformTypeForStillImageRequest:(id)a0 result:(id)a1;
- (void)_handleCompletedStillImageJobForRequest:(id)a0 withReply:(id)a1 fromBatchOfSize:(unsigned long long)a2 completionHandler:(id /* block */)a3 error:(id)a4;
- (id)_jobDictionaryForStillImageLocalResult:(id)a0 filteredLocalResult:(id)a1 spatialOverCaptureLocalResult:(id)a2 fromRequest:(id)a3;
- (id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)a0;
- (void)_removeCoordinationGroupForIdentifier:(id)a0;
- (unsigned int)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)a0;
- (void)stillImagePersistenceCoordinator:(id)a0 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)a1 request:(id)a2;
- (void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)a0 filteredLocalResult:(id)a1 spatialOverCaptureLocalResult:(id)a2 request:(id)a3 powerAssertionReason:(unsigned int)a4 loggingIdentifier:(id)a5;
- (void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)a0 withReply:(id)a1 fromBatchOfSize:(unsigned long long)a2 error:(id)a3;
- (void)persistPlaceholderTimelapseVideoWithResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)_locallyPersistStillImageResult:(id)a0 forRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_mainThread_handleApplicationDidEnterBackground:(id)a0;
- (void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)a0 withReply:(id)a1 error:(id)a2;
- (void)_handleVideoPersistenceForRequest:(id)a0 withResult:(id)a1;
- (id)initWithLocationController:(id)a0 burstController:(id)a1 protectionController:(id)a2 powerController:(id)a3 irisVideoController:(id)a4;
- (void)_remotelyPersistStillImageJob:(id)a0 forRequest:(id)a1 loggingIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)_coordinateRemotePersistenceForVideoLocalResult:(id)a0 coordinationInfo:(id)a1 request:(id)a2;
- (id)_persistStillImageCaptureSurfaceResult:(id)a0 withRequest:(id)a1;
- (id)_persistVideoCaptureResult:(id)a0 withRequest:(id)a1;
- (id)_spatialOverCaptureIdentifierForVideoURL:(id)a0;
- (void)_dispatchRemotePersistenceForLocalVideoPersistenceResult:(id)a0 spatialOverCaptureLocalVideoResult:(id)a1 request:(id)a2 powerAssertionReason:(unsigned int)a3 loggingIdentifier:(id)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformForRotationDegrees:(int)a0 mirrored:(BOOL)a1;
- (void)videoRequest:(id)a0 didCompleteCaptureWithResult:(id)a1;
- (void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)a0 withResult:(id)a1;
- (void)videoPersistenceCoordinator:(id)a0 requestsRemotePersistenceForLocalPersistenceResult:(id)a1 spatialOverCaptureResult:(id)a2 captureRequest:(id)a3 powerAssertionReason:(unsigned int)a4;
- (void)persistBurstWithIdentifier:(id)a0 result:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_remotelyPersistVideoJob:(id)a0 forRequest:(id)a1 loggingIdentifier:(id)a2 withSendHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (void)stillImageRequest:(id)a0 didCompleteStillImageCaptureWithResult:(id)a1;
- (id)_ensureCoordinationGroupForIdentifier:(id)a0;
- (void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)a0 withResult:(id)a1;
- (void)_coordinateRemotePersistenceForStillImageLocalResult:(id)a0 coordinationInfo:(id)a1 request:(id)a2;
- (id)_xmpEncodedDiagnosticDataFromDictionary:(id)a0;
- (void)_handleStillImagePersistenceForRequest:(id)a0 withResult:(id)a1;
- (void)_handleCompletedVideoJobForRequest:(id)a0 withReply:(id)a1 completionHandler:(id /* block */)a2 error:(id)a3;
- (id)_jobDictionaryForTimelapsePlaceholderResult:(id)a0;
- (void)dealloc;
- (void)_locallyPersistVideoCaptureResult:(id)a0 forRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (struct __CFWriteStream { } *)_createOpenWriteStreamWithURL:(id)a0 forBurst:(BOOL)a1;
- (BOOL)_writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3 duringBurst:(BOOL)a4 error:(out id *)a5;
- (void)performDeferredRemotePersistenceWithCompletionHandler:(id /* block */)a0;
- (BOOL)_writeDataToURL:(id)a0 withData:(id)a1 duringBurst:(BOOL)a2 error:(out id *)a3;
- (id)_adjustmentsDataForRequest:(id)a0 captureDimensions:(struct { int x0; int x1; })a1 portraitMetadata:(id)a2;
- (void)panoramaRequest:(id)a0 didCompleteCaptureWithResult:(id)a1;
- (id)_adjustmentsDataForCinematicVideo;
- (unsigned int)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)a0;
- (id)_jobDictionaryForVideoLocalResult:(id)a0 spatialOverCaptureLocalResult:(id)a1 fromRequest:(id)a2;
- (id)_stillPersistenceUUIDForRequest:(id)a0 withVideoResult:(id)a1;
- (id)_createMetadataForPhysicallyOrientedImage:(id)a0;
- (unsigned int)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)a0;
- (id)_coordinationGroupForIdentifier:(id)a0;

@end
