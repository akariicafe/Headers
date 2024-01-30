@class NSMutableArray;

@interface WBSPermissionDialogThrottler : NSObject {
    long long _denyCount;
    NSMutableArray *_requestedPresentations;
    BOOL _isShowingDialog;
    BOOL _invalidated;
    BOOL _callingPresentationHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_callNextPresentationHandlerIfNeeded;
- (BOOL)_canShowPermissionDialog;
- (void)requestPermissionDialogPresentation:(id /* block */)a0;
- (void)didCompletePermissionDialog:(BOOL)a0;
- (void)willPerformUserInitiatedNavigation;

@end
