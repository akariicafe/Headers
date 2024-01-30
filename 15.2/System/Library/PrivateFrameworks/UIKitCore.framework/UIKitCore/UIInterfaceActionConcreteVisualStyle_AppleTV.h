@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (void)configureForPresentingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)defaultScreen;
- (double)contentCornerRadius;
- (double)verticalImageContentSpacing;
- (id)actionPropertiesAffectingLabelStyling;
- (BOOL)selectByPressGestureRequired;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (double)horizontalImageContentSpacing;
- (double)actionSectionSpacing;
- (id)actionImageViewTintColorForImageProperty:(id)a0 actionViewState:(id)a1;

@end
