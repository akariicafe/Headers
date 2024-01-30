@class UIView, NSString, NSArray, _UILAConfigurationHistory, NSSet, NSMutableArray, NSMutableSet, _UILayoutSpacer;
@protocol _UILAPropertySource;

@interface _UILayoutArrangement : NSObject <_UILAPropertySource> {
    NSMutableSet *_incomingItems;
    NSMutableSet *_outgoingItems;
    NSMutableSet *_hiddenItems;
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableArray *_canvasConnectionConstraints;
}

@property (retain, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems;
@property (readonly, nonatomic) NSSet *_hiddenItems;
@property (readonly, nonatomic) NSSet *_incomingItems;
@property (readonly, nonatomic) NSSet *_outgoingItems;
@property (retain, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget;
@property (readonly, nonatomic) BOOL _awaitingAnimationLayoutPass;
@property (readonly, nonatomic) id<_UILAPropertySource> _propertySource;
@property (readonly, retain, nonatomic) _UILayoutSpacer *_spanningLayoutGuide;
@property (readonly, retain, nonatomic) _UILAConfigurationHistory *_configurationHistory;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (weak, nonatomic) UIView *canvas;
@property (nonatomic) long long axis;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSMutableSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_configurationHistoryClass;

- (id)initWithItems:(id)a0;
- (void)_invalidateBaselineConstraint:(id)a0;
- (void)_registerAnimationRequest;
- (long long)_axisForSpanningLayoutGuide;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)a0;
- (BOOL)_usesCenteringConnectionConstraint;
- (BOOL)_itemWantsLayoutAsIfVisible:(id)a0;
- (void)addItem:(id)a0;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)a0;
- (void)_hasBaselineChangedNotificationRequirementDidChange;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (BOOL)_allItemsHidden;
- (void)_removeSpanningLayoutGuide;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (long long)_minAttributeForCanvasConnections;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)_setAxis:(long long)a0 notify:(BOOL)a1;
- (void)_updateConfigurationHistory;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (void)_clearAllConstraintsArrays;
- (float)_spanningLayoutGuideFittingPriority;
- (void)_respondToChangesWithIncomingItem:(id)a0 outgoingItem:(id)a1 newlyHiddenItem:(id)a2 newlyUnhiddenItem:(id)a3;
- (void)removeItem:(id)a0;
- (id)_baselineDependentConstraints;
- (void)_setLayoutFillsCanvas:(BOOL)a0 notify:(BOOL)a1;
- (id)_identifierForSpanningLayoutGuide;
- (BOOL)_hasStaleConfiguration;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (void).cxx_destruct;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)a0;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (id)init;
- (void)_createSpanningLayoutGuide;
- (void)_didEvaluateMultilineHeightForView:(id)a0;
- (long long)_centerAttributeForCanvasConnections;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (BOOL)_spanningLayoutGuideAlwaysUsesFittingConstraint;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)a0;
- (void)_trackChangesWithConfigBlock:(id /* block */)a0;
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(BOOL)a0 notify:(BOOL)a1;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)a0;
- (void)_clearCanvasConnectionConstraints;
- (void)_visibilityParameterChangedForItem:(id)a0;
- (void)_hasBaselineChangedNotification:(id)a0;
- (id)_viewOrGuideForLocationAttribute:(long long)a0;
- (id)initWithItems:(id)a0 onAxis:(long long)a1;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
- (void)_updateArrangementConstraints;
- (long long)_dimensionAttributeForCurrentAxis;

@end
