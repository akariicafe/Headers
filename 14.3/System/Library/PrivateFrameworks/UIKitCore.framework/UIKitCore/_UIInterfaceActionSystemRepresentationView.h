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

- (void)_applyVisualStyle;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(BOOL)a0;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(BOOL)a0;
- (id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)a0;
- (id)initWithAction:(id)a0;
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)a0;
- (void)updateContentsInsertedIntoHierarchy;
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
- (void).cxx_destruct;
- (id)_constraintsForHorizontallyCenteringLabelsView;
- (id)_constraintForVerticallyCenteringLabelsView;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)_loadConstraintsForLabelsAndImagesDisplay;
- (void)_reloadViewsToDisplayWhenContentsVisible;
- (void)updateConstraints;
- (void)_loadConstraintsForDisplayedViews;
- (BOOL)_displayedViewsConstraintsNeedsLoading;
- (void)_applyVisualStyleToDisplayedViews;
- (void)_invalidateDisplayedViewsConstraints;
- (void)_loadConstraintsForLabelsOnlyDisplay;
- (void)_activateDisplayedViewsConstraints;
- (void)loadContents;
- (BOOL)_isDisplayingTrailingImageView;
- (BOOL)_isDisplayingLeadingImageView;
- (void)_removeAllDisplayedViews;
- (id)_horizontalEdgeReference;
- (void)_arrangeDisplayedViews;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;
- (BOOL)_hasLoadedContents;

@end
