@protocol BSInvalidatable;

@interface CSModalPresentationViewController : CSPresentationViewController {
    id<BSInvalidatable> _stateCaptureBlock;
}

- (void)_addStateCaptureHandlers;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
