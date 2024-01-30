@class NSSet, NSMapTable, NSString;

@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource> {
    NSMapTable *_spacingOrCenteringGuides;
    NSMapTable *_edgeToEdgeConstraintsForVisibleItems;
    NSMapTable *_edgeToEdgeConstraintsForHiddenItems;
    NSMapTable *_relatedDimensionConstraints;
    NSMapTable *_hidingDimensionConstraints;
    NSMapTable *_multilineTextWidthDisambiguationConstraints;
    double _proportionalFillDenominator;
}

@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged;
@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged;
@property (readonly, nonatomic) NSMapTable *customSpacings;
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

- (void)removeItem:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_hasStaleConfiguration;
- (void)_trackChangesAffectingExternalBaselineConstraints:(id /* block */)a0;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)a0 atIndex:(unsigned long long)a1 processPrecedingVisisbleItem:(BOOL)a2;
- (void)_cleanUpGuideAtGapFollowingItem:(id)a0;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)a0 followingItem:(id)a1 isPrecededByVisibleItem:(BOOL)a2 isFollowedByVisibleItem:(BOOL)a3 isHidden:(BOOL)a4;
- (id)_lastVisibleItem;
- (void)_didEvaluateMultilineHeightForView:(id)a0;
- (double)customSpacingAfterItem:(id)a0;
- (void).cxx_destruct;
- (void)_setUpHidingDimensionConstraintForItem:(id)a0;
- (id)_dimensionRefItemFromConstraint:(id)a0;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)a0;
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)a0;
- (id)_firstVisibleItem;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)a0 hiddenItem:(id)a1;
- (void)_visibilityParameterChangedForItem:(id)a0;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (long long)_precedingLocationAttributeForGuideConstraint;
- (void)_adjustConstraintConstantsIfPossible;
- (long long)_minAttributeForGapConstraint;
- (void)_setUpDimensionConstraintForItem:(id)a0 referenceItem:(id)a1 atIndex:(unsigned long long)a2;
- (void)_cleanUpGuides;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)a0 followingItem:(id)a1 isPrecededByVisibleItem:(BOOL)a2 isFollowedByVisibleItem:(BOOL)a3;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_updateConfigurationHistory;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)a0;
- (BOOL)_hasStaleSpacing;
- (double)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)a0 followingItem:(id)a1 isPrecededByVisibleItem:(BOOL)a2 isFollowedByVisibleItem:(BOOL)a3;
- (BOOL)_wantsProportionalDistribution;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)a0;
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)a0;
- (void)setCustomSpacing:(double)a0 afterItem:(id)a1;
- (id)_tallestItem;
- (void)_updateArrangementConstraints;
- (void)_clearAllConstraintsArrays;
- (BOOL)_customSpacingChanged;
- (BOOL)_itemCountChanged;
- (long long)_minAttributeForGapConstraintRespectingBaselineRelative:(BOOL)a0;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)a0;
- (id)_orderedConfigurationHistory;
- (id)_orderedPropertySource;
- (long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(BOOL)a0;
- (void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)a0 atIndex:(unsigned long long)a1 processAdjacentHiddenItems:(BOOL)a2;
- (id)_baselineViewVendTallest:(BOOL)a0 forFirstBaseline:(BOOL)a1;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)a0;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (id)_identifierForSpanningLayoutGuide;
- (double)_calculatedIntrinsicHeight;

@end
