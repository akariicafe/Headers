@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_iOS : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (id)_highlightedView;
- (id)_preferredActionFont;
- (id)_regularActionFont;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)defaultScreen;
- (double)horizontalImageContentSpacing;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (BOOL)selectByIndirectPointerTouchRequired;
- (BOOL)selectionFeedbackEnabled;
- (double)verticalImageContentSpacing;

@end
