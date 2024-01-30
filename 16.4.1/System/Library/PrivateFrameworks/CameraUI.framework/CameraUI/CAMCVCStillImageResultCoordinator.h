@class NSString, NSMutableDictionary, NSMutableSet, NSSet;
@protocol CAMCVCStillImageResultCoordinatorDelegate;

@interface CAMCVCStillImageResultCoordinator : NSObject

@property (readonly, nonatomic) NSMutableSet *_receivedPhotos;
@property (readonly, nonatomic) NSMutableSet *_receivedVideos;
@property (readonly, nonatomic) NSMutableSet *_photoResultSpecifiersDelayingForcedDispatch;
@property (readonly, nonatomic) NSMutableSet *_videoResultSpecifiersDelayingForcedDispatch;
@property (readonly, nonatomic, getter=_isDelayingForcedDispatch) BOOL _delayingForcedDispatch;
@property (nonatomic, setter=_setDidReceiveForceRemainingDispatchesIfPossible:) BOOL _didReceiveForceRemainingDispatchesIfPossible;
@property (readonly, nonatomic) NSMutableSet *_handledResultSpecifiers;
@property (readonly, nonatomic) NSMutableSet *_dispatchedResultSpecifiers;
@property (readonly, nonatomic) NSMutableDictionary *_pendingPhotoProperties;
@property (readonly, nonatomic) NSMutableDictionary *_pendingVideoProperties;
@property (readonly, nonatomic) NSMutableDictionary *_pendingAssetAdjustments;
@property (readonly, weak, nonatomic) id<CAMCVCStillImageResultCoordinatorDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *allExpectedResultSpecifiers;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) BOOL allowMultipleCaptures;
@property (readonly, nonatomic) BOOL shouldReturnFilteredPhotosAsSingleAsset;

- (void).cxx_destruct;
- (BOOL)_attemptDispatchForPairWithFilteredResultSpecifiers:(unsigned long long)a0 unfilteredResultSpecifiers:(unsigned long long)a1 forceRemainingDispatches:(BOOL)a2;
- (BOOL)_attemptDispatchForResultSpecifiers:(unsigned long long)a0 forceRemainingDispatches:(BOOL)a1;
- (void)_dispatchPendingPropertiesForced:(BOOL)a0;
- (id)_errorForResultSpecifiers:(unsigned long long)a0 allowMissingVideo:(BOOL)a1;
- (id)_errorWithDescription:(id)a0 code:(long long)a1;
- (BOOL)_isWaitingOnResultSpecifiers:(unsigned long long)a0;
- (void)delayForcedDispatchForPhotoResultSpecifiers:(unsigned long long)a0;
- (void)delayForcedDispatchForVideoResultSpecifiers:(unsigned long long)a0;
- (void)forceRemainingDispatchesIfPossible;
- (id)initWithDelegate:(id)a0 identifier:(id)a1 allExpectedResultSpecifiers:(id)a2 isExpectingPairedVideo:(BOOL)a3 allowMultipleCaptures:(BOOL)a4 shouldReturnFilteredPhotosAsSingleAsset:(BOOL)a5;
- (void)updatePhotoProperties:(id)a0 assetAdjustments:(id)a1 forResultSpecifiers:(unsigned long long)a2;
- (void)updateVideoProperties:(id)a0 forResultSpecifiers:(unsigned long long)a1;

@end
