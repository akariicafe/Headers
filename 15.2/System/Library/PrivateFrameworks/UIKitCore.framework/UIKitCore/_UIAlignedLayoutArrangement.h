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

- (id)initWithItems:(id)a0;
- (long long)_axisForSpanningLayoutGuide;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)a0;
- (BOOL)_usesCenteringConnectionConstraint;
- (void)_removeConstraintGroupsAsNecessary;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (void)_updateConfigurationHistory;
- (void)_clearAllConstraintsArrays;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (id)_baselineDependentConstraints;
- (id)_identifierForSpanningLayoutGuide;
- (BOOL)_hasStaleConfiguration;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (void).cxx_destruct;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)a0;
- (id)_alignmentConfigurationHistory;
- (void)_setUpConstraintForItem:(id)a0 referenceItem:(id)a1 attribute:(long long)a2 inConstraintsTable:(id)a3;
- (void)_removeIndividualConstraintsAsNecessary;
- (long long)_attributeForConstraintGroupName:(id)a0;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)a0;
- (id)_alignmentPropertySource;
- (void)_addConstraintGroupsAsNecessary;
- (void)_addIndividualConstraintsIfPossible;
- (BOOL)_wantsConstraintsForAttribute:(long long)a0;
- (void)_updateArrangementConstraints;

@end
