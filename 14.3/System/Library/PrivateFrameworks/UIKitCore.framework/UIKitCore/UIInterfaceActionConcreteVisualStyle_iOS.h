@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_iOS : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentCornerRadius;
- (BOOL)selectionFeedbackEnabled;
- (BOOL)selectByIndirectPointerTouchRequired;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (double)verticalImageContentSpacing;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (double)horizontalImageContentSpacing;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)_preferredActionFont;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)defaultScreen;
- (id)_highlightedView;
- (id)_regularActionFont;

@end
