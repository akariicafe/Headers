@class NSString;

@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionPropertiesAffectingLabelStyling;
- (double)contentCornerRadius;
- (BOOL)selectionFeedbackEnabled;
- (double)actionTitleLabelMinimumScaleFactor;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (BOOL)selectByIndirectPointerTouchRequired;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureForPresentingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (double)verticalImageContentSpacing;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionImageViewTintColorForImageProperty:(id)a0 actionViewState:(id)a1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (struct CGSize { double x0; double x1; })maximumActionGroupContentSize;
- (id)actionPropertiesAffectingImageViewStyling;
- (void)configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (BOOL)selectByPressGestureRequired;
- (double)horizontalImageContentSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (id)actionClassificationLabelColorForViewState:(id)a0;
- (double)actionSectionSpacing;
- (id)newRepresentationViewForAction:(id)a0;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)defaultScreen;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)actionClassificationLabelFontForViewState:(id)a0;

@end
