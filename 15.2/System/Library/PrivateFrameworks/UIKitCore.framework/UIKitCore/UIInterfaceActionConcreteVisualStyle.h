@class NSString;

@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)actionClassificationLabelColorForViewState:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (id)actionClassificationLabelFontForViewState:(id)a0;
- (void)configureForPresentingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)actionPropertiesAffectingImageViewStyling;
- (id)defaultScreen;
- (double)contentCornerRadius;
- (BOOL)selectionFeedbackEnabled;
- (void)configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (id)newRepresentationViewForAction:(id)a0;
- (double)verticalImageContentSpacing;
- (id)actionPropertiesAffectingLabelStyling;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (BOOL)selectByPressGestureRequired;
- (double)actionTitleLabelMinimumScaleFactor;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (BOOL)selectByIndirectPointerTouchRequired;
- (struct CGSize { double x0; double x1; })maximumActionGroupContentSize;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (double)horizontalImageContentSpacing;
- (double)actionSectionSpacing;
- (id)actionImageViewTintColorForImageProperty:(id)a0 actionViewState:(id)a1;

@end
