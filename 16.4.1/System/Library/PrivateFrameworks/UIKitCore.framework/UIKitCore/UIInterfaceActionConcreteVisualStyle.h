@class NSString;

@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentCornerRadius;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (void)configureForPresentingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (id)newRepresentationViewForAction:(id)a0;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (id)actionClassificationLabelColorForViewState:(id)a0;
- (id)actionClassificationLabelFontForViewState:(id)a0;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (id)actionImageViewTintColorForImageProperty:(id)a0 actionViewState:(id)a1;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)actionPropertiesAffectingImageViewStyling;
- (id)actionPropertiesAffectingLabelStyling;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (double)actionTitleLabelMinimumScaleFactor;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (void)configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (id)defaultScreen;
- (double)horizontalImageContentSpacing;
- (struct CGSize { double x0; double x1; })maximumActionGroupContentSize;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (BOOL)selectByIndirectPointerTouchRequired;
- (BOOL)selectByPressGestureRequired;
- (BOOL)selectionFeedbackEnabled;
- (double)verticalImageContentSpacing;

@end
