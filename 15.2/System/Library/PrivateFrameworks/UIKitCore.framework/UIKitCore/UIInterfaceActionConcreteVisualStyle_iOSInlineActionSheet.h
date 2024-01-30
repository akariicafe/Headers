@class _UIDimmingKnockoutBackdropView;

@interface UIInterfaceActionConcreteVisualStyle_iOSInlineActionSheet : UIInterfaceActionConcreteVisualStyle_iOSSheet {
    _UIDimmingKnockoutBackdropView *_inlineBackgroundView;
}

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (id)_preferredActionFont;
- (double)verticalImageContentSpacing;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (void).cxx_destruct;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (double)_actionTitleFontSize;
- (id)_regularActionFont;
- (double)horizontalImageContentSpacing;

@end
