@class NSString, NSMutableDictionary, NSNumber, SBFTraitsSettingsValidator;

@interface SBTraitsOrientationDefaultTreeResolver : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeResolving> {
    SBFTraitsSettingsValidator *_settingsValidator;
    NSMutableDictionary *_mapResolverCache;
}

@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_mapResolverForTargetOrientation:(long long)a0 currentOrientation:(long long)a1;
- (BOOL)_node:(id)a0 validatesNewSettings:(id)a1;
- (void)resolveStagePreferencesTree:(id)a0 context:(id)a1;
- (id)initWithComponentOrder:(id)a0;
- (void).cxx_destruct;
- (long long)_targetOrientationForResolutionInfo:(id)a0 validatedInputs:(id)a1 rawInputs:(id)a2 participant:(id)a3 parent:(id)a4;

@end
