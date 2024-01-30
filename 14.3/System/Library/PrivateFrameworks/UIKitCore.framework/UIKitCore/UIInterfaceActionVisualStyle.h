@class UIInterfaceActionConcreteVisualStyle, UIInterfaceActionGroupViewState, NSString, UIInterfaceActionOverrideVisualStyle;
@protocol UIInterfaceActionConcreteVisualStyleImpl;

@interface UIInterfaceActionVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying>

@property (retain, nonatomic) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle;
@property (copy, nonatomic) id /* block */ fontForViewStateBlock;
@property (retain, nonatomic) UIInterfaceActionOverrideVisualStyle *visualStyleOverride;
@property (readonly, nonatomic) UIInterfaceActionGroupViewState *groupViewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)idiomSpecificStyleForTraitCollection:(id)a0 presentationStyle:(long long)a1;

- (id)defaultConcreteActionTitleLabelPreferredFont;
- (id)actionPropertiesAffectingLabelStyling;
- (id)_base_actionPropertiesAffectingImageViewStyling;
- (double)contentCornerRadius;
- (BOOL)selectionFeedbackEnabled;
- (double)actionTitleLabelMinimumScaleFactor;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (void)_base_configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (id)init;
- (BOOL)selectByIndirectPointerTouchRequired;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_styleForVisualProperties;
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
- (void)_base_configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (id)actionClassificationLabelColorForViewState:(id)a0;
- (double)actionSectionSpacing;
- (BOOL)isEqual:(id)a0;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (id)_base_actionPropertiesAffectingLabelStyling;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)defaultScreen;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)actionClassificationLabelFontForViewState:(id)a0;
- (id)copyWithGroupViewState:(id)a0;
- (id)initWithConcreteVisualStyle:(id)a0;
- (id)defaultConcreteActionTitleLabelRegularFont;

@end
