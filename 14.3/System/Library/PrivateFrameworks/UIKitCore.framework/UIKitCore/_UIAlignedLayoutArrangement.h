@class NSSet, NSString, NSMutableDictionary;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {
    NSMutableDictionary *_alignmentConstraints;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_configurationHistoryClass;

- (BOOL)_hasStaleConfiguration;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (id)initWithItems:(id)a0;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (id)_alignmentConfigurationHistory;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)a0;
- (void).cxx_destruct;
- (id)_alignmentPropertySource;
- (long long)_axisForSpanningLayoutGuide;
- (void)_addIndividualConstraintsIfPossible;
- (long long)_attributeForConstraintGroupName:(id)a0;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (void)_removeConstraintGroupsAsNecessary;
- (void)_removeIndividualConstraintsAsNecessary;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (void)_addConstraintGroupsAsNecessary;
- (void)_updateConfigurationHistory;
- (BOOL)_usesCenteringConnectionConstraint;
- (void)_updateArrangementConstraints;
- (void)_clearAllConstraintsArrays;
- (void)_setUpConstraintForItem:(id)a0 referenceItem:(id)a1 attribute:(long long)a2 inConstraintsTable:(id)a3;
- (BOOL)_wantsConstraintsForAttribute:(long long)a0;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)a0;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)a0;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (id)_baselineDependentConstraints;
- (id)_identifierForSpanningLayoutGuide;

@end
