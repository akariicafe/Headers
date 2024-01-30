@class NSObject;
@protocol OS_os_log;

@interface AVTStickerLogger : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)logStartExport:(id)a0;
- (void)logCompletedApplyConfiguration:(id)a0;
- (void)logCompleteBuildingProp:(id)a0 startedAt:(double)a1;
- (void)logCompleteExport:(id)a0 startedAt:(double)a1;
- (void)logConfigurationNotFoundForName:(id)a0;
- (void)logErrorBuildingProp:(id)a0;
- (void)logErrorCreatingAssetReader:(id)a0;
- (void)logErrorShaderModifiers:(id)a0 cantBeRemovedFromAvatar:(id)a1 errors:(id)a2;
- (void)logRemovingShaderModifiers:(id)a0 fromAvatar:(id)a1 wereApplied:(BOOL)a2;
- (void)logShaderModifier:(id)a0 appliedToAvatar:(id)a1 material:(id)a2;
- (void)logShaderModifier:(id)a0 notRemovedFromAvatar:(id)a1 reason:(id)a2;
- (void)logShaderModifier:(id)a0 removedFromAvatar:(id)a1 material:(id)a2;
- (void)logStartApplyConfiguration:(id)a0;
- (void)logStartBuildingProp:(id)a0;

@end
