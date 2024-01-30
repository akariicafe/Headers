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

- (void)_assertInsideUpdate;
- (void)_assertInsideChangeBlock;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateDone;
- (void)_updateSeeking;
- (void)_cleanUpWhenDone;
- (void)_finishRequest;
- (id)_infoMessage;
- (void)_invalidateArrived;
- (void)_invalidateFoundTargetAssetReference;
- (id)_navigationRequestError;
- (void)_updateArrivedIfNeeded;
- (void)_updateCurrentAssetReference;
- (void)_updateDoneIfNeeded;
- (void)_updateFoundTargetAssetReferenceIfNeeded;

@end
