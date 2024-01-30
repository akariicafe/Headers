@class HMCameraProfile;

@interface HUCameraEraseRecordingsItem : HFStaticItem

@property (readonly, copy, nonatomic) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (void)_updateResultsForFuture:(id)a0 withHiddenStatus:(BOOL)a1;

@end
