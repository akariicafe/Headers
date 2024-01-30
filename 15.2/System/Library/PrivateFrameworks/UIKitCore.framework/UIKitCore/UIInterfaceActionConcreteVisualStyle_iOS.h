@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_iOS : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)defaultScreen;
- (id)_preferredActionFont;
- (double)contentCornerRadius;
- (BOOL)selectionFeedbackEnabled;
- (double)verticalImageContentSpacing;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (id)_highlightedView;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (BOOL)selectByIndirectPointerTouchRequired;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)_regularActionFont;
- (double)horizontalImageContentSpacing;

@end
