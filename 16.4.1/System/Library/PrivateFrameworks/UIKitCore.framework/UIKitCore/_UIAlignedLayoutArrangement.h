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

- (id)_identifierForSpanningLayoutGuide;
- (id)_alignmentConfigurationHistory;
- (void)_updateConfigurationHistory;
- (long long)_attributeForConstraintGroupName:(id)a0;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)a0;
- (long long)_axisForSpanningLayoutGuide;
- (void)_addConstraintGroupsAsNecessary;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (void)_removeIndividualConstraintsAsNecessary;
- (BOOL)_wantsConstraintsForAttribute:(long long)a0;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (void)_addIndividualConstraintsIfPossible;
- (void)_updateArrangementConstraints;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (void)dealloc;
- (void)_removeConstraintGroupsAsNecessary;
- (BOOL)_usesCenteringConnectionConstraint;
- (id)initWithItems:(id)a0;
- (BOOL)_hasStaleConfiguration;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)a0;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)a0;
- (id)_alignmentPropertySource;
- (void)_clearAllConstraintsArrays;
- (void).cxx_destruct;
- (void)_setUpConstraintForItem:(id)a0 referenceItem:(id)a1 attribute:(long long)a2 inConstraintsTable:(id)a3;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (id)_baselineDependentConstraints;

@end
