@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)_highlightedActionTitleLabelColorForViewState:(id)a0;
- (id)_normalActionTitleLabelColorForViewState:(id)a0;
- (double)verticalImageContentSpacing;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (BOOL)selectByPressGestureRequired;
- (double)horizontalImageContentSpacing;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)_preferredActionFont;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)defaultScreen;
- (id)_regularActionFont;

@end
