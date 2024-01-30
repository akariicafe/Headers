@class PUAssetReference, NSString, NSTimer, NSDate, PUBrowsingViewModel;

@interface PUAssetDisplayDescriptorNavigationRequest : NSObject <PUBrowsingViewModelChangeObserver> {
    NSTimer *_timeOutTimer;
    BOOL _hasSeenContentChange;
}

@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateFoundTargetAssetReference:) BOOL _needsUpdateFoundTargetAssetReference;
@property (nonatomic, setter=_setNeedsUpdateArrived:) BOOL _needsUpdateArrived;
@property (nonatomic, setter=_setNeedsUpdateDone:) BOOL _needsUpdateDone;
@property (retain, nonatomic, setter=_setFoundTargetAssetReference:) PUAssetReference *_foundTargetAssetReference;
@property (nonatomic, setter=_setSeeked:) BOOL _seeked;
@property (nonatomic, setter=_setArrived:) BOOL _arrived;
@property (nonatomic, setter=_setTimedOut:) BOOL _timedOut;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (retain, nonatomic) PUAssetReference *targetAssetReference;
@property (retain, nonatomic) NSDate *targetModificationDate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetSeekTime;
@property (nonatomic) double timeOut;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_assertInsideChangeBlock;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)_invalidateDone;
- (void)_updateCurrentAssetReference;
- (void)_updateSeeking;
- (void)_invalidateArrived;
- (void)_finishRequest;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_invalidateFoundTargetAssetReference;
- (void)_updateFoundTargetAssetReferenceIfNeeded;
- (void)_updateArrivedIfNeeded;
- (void)_updateDoneIfNeeded;
- (void)_cleanUpWhenDone;
- (id)_navigationRequestError;
- (id)_infoMessage;
- (void).cxx_destruct;
- (id)init;
- (void)_assertInsideUpdate;
- (void)dealloc;

@end
