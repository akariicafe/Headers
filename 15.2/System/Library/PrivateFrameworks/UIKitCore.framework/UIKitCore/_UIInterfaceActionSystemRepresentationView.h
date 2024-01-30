@class _UIInterfaceActionImagePropertyView, NSSet, NSArray, NSString, _UIInterfaceActionLabelsPropertyView;

@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver>

@property (readonly, nonatomic) _UIInterfaceActionImagePropertyView *leadingImageView;
@property (readonly, nonatomic) _UIInterfaceActionImagePropertyView *trailingImageView;
@property (readonly, nonatomic) _UIInterfaceActionLabelsPropertyView *labelsView;
@property (retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible;
@property (retain, nonatomic) NSSet *displayedViews;
@property (readonly, nonatomic) NSArray *displayedViewsSpacingConstraints;
@property (readonly, nonatomic) NSArray *displayedViewsPositioningConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(BOOL)a0;
- (id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)a0;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(BOOL)a0;
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)a0;
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
- (id)_constraintsForHorizontallyCenteringLabelsView;
- (void)_loadConstraintsForLabelsAndImagesDisplay;
- (void)_reloadViewsToDisplayWhenContentsVisible;
- (id)_constraintForVerticallyCenteringLabelsView;
- (void)_invalidateDisplayedViewsConstraints;
- (void)_loadConstraintsForLabelsOnlyDisplay;
- (void)loadContents;
- (BOOL)_displayedViewsConstraintsNeedsLoading;
- (id)initWithAction:(id)a0;
- (void)_activateDisplayedViewsConstraints;
- (void)_loadConstraintsForDisplayedViews;
- (void)_applyVisualStyleToDisplayedViews;
- (void)_applyVisualStyle;
- (BOOL)_isDisplayingTrailingImageView;
- (BOOL)_isDisplayingLeadingImageView;
- (void).cxx_destruct;
- (void)_removeAllDisplayedViews;
- (id)_horizontalEdgeReference;
- (void)updateConstraints;
- (void)updateContentsInsertedIntoHierarchy;
- (void)_arrangeDisplayedViews;
- (BOOL)_hasLoadedContents;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;

@end
