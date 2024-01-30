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

- (double)contentCornerRadius;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (void).cxx_destruct;
- (void)configureForDismissingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (void)configureForPresentingGroupView:(id)a0 alongsideTransitionCoordinator:(id)a1;
- (void)configureAttributesForActionRepresentationView:(id)a0 actionViewState:(id)a1;
- (id)_base_actionPropertiesAffectingImageViewStyling;
- (id)_base_actionPropertiesAffectingLabelStyling;
- (void)_base_configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (void)_base_configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (id)_styleForVisualProperties;
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
- (id)copyWithGroupViewState:(id)a0;
- (id)defaultConcreteActionTitleLabelPreferredFont;
- (id)defaultConcreteActionTitleLabelRegularFont;
- (id)defaultScreen;
- (double)horizontalImageContentSpacing;
- (id)initWithConcreteVisualStyle:(id)a0;
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
