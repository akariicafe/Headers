@class _UIDimmingKnockoutBackdropView;

@interface UIInterfaceActionConcreteVisualStyle_iOSInlineActionSheet : UIInterfaceActionConcreteVisualStyle_iOSSheet {
    _UIDimmingKnockoutBackdropView *_inlineBackgroundView;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (double)verticalImageContentSpacing;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (double)horizontalImageContentSpacing;
- (id)_preferredActionFont;
- (double)_actionTitleFontSize;
- (id)_regularActionFont;

@end
