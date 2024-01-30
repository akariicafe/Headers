@interface SBRootDodgingLayerModifier : SBDodgingModifier

@property (nonatomic) BOOL hasPerformedInitialSetup;

- (id)handleRemovalEvent:(id)a0;
- (void)_setup;
- (void)setDelegate:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)handlePreferenceChangeEvent:(id)a0;
- (id)_floorModifier;
- (id)handleRotationEvent:(id)a0;

@end
