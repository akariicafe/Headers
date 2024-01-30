@class NSNumber, NSString, SBFTraitsSettingsValidator;

@interface SBFTraitsOrientationDefaultTreeResolver : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeResolving> {
    SBFTraitsSettingsValidator *_settingsValidator;
}

@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resolveStagePreferencesTree:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_node:(id)a0 validatesNewOrientation:(long long)a1;

@end
