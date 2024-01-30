@interface SBRootDodgingLayerModifier : SBDodgingModifier

@property (nonatomic) BOOL hasPerformedInitialSetup;

- (id)handleRemovalEvent:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_setup;
- (id)_floorModifier;
- (id)handleInsertionEvent:(id)a0;
- (id)handlePreferenceChangeEvent:(id)a0;
- (id)handleRotationEvent:(id)a0;

@end
