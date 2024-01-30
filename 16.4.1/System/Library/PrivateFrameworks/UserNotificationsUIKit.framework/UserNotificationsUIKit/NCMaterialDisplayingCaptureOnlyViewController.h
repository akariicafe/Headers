@class NSMutableDictionary;

@interface NCMaterialDisplayingCaptureOnlyViewController : UIViewController {
    NSMutableDictionary *_supplementaryMaterialsAndUsageCounts;
}

- (void)registerMaterialDisplaying:(id)a0 persistent:(BOOL)a1;
- (BOOL)_supportsCaptureForMaterialDisplaying:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_registerMaterialDisplaying:(BOOL)a0 forDisplaying:(id)a1 persistent:(BOOL)a2;
- (void)unregisterMaterialDisplaying:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;

@end
