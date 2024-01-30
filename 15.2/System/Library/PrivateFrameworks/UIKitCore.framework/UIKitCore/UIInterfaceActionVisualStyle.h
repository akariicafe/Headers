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

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)actionClassificationLabelColorForViewState:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (id)_styleForVisualProperties;
- (id)initWithConcreteVisualStyle:(id)a0;
- (id)actionClassificationLabelFontForViewState:(id)a0;
- (void)configureForPresentingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)actionPropertiesAffectingImageViewStyling;
- (id)defaultScreen;
- (id)defaultConcreteActionTitleLabelPreferredFont;
- (double)contentCornerRadius;
- (BOOL)selectionFeedbackEnabled;
- (void)configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (double)verticalImageContentSpacing;
- (id)actionPropertiesAffectingLabelStyling;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (BOOL)selectByPressGestureRequired;
- (double)actionTitleLabelMinimumScaleFactor;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (id)init;
- (BOOL)selectByIndirectPointerTouchRequired;
- (void)_base_configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (struct CGSize { double x0; double x1; })maximumActionGroupContentSize;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_base_actionPropertiesAffectingLabelStyling;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (id)defaultConcreteActionTitleLabelRegularFont;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (void)_base_configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (id)_base_actionPropertiesAffectingImageViewStyling;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (double)horizontalImageContentSpacing;
- (id)copyWithGroupViewState:(id)a0;
- (double)actionSectionSpacing;
- (id)actionImageViewTintColorForImageProperty:(id)a0 actionViewState:(id)a1;

@end
