@protocol BSInvalidatable;

@interface CSModalPresentationViewController : CSPresentationViewController {
    id<BSInvalidatable> _stateCaptureBlock;
}

- (void)_addStateCaptureHandlers;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
