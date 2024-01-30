@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;
- (id)_highlightedActionTitleLabelColorForViewState:(id)a0;
- (id)_normalActionTitleLabelColorForViewState:(id)a0;
- (id)defaultScreen;
- (id)_preferredActionFont;
- (double)contentCornerRadius;
- (double)verticalImageContentSpacing;
- (BOOL)selectByPressGestureRequired;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)_regularActionFont;
- (double)horizontalImageContentSpacing;

@end
