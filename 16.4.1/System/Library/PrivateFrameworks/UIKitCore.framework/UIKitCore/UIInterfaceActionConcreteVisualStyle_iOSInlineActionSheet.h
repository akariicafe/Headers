@class _UIDimmingKnockoutBackdropView;

@interface UIInterfaceActionConcreteVisualStyle_iOSInlineActionSheet : UIInterfaceActionConcreteVisualStyle_iOSSheet {
    _UIDimmingKnockoutBackdropView *_inlineBackgroundView;
}

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (void).cxx_destruct;
- (double)_actionTitleFontSize;
- (id)_preferredActionFont;
- (id)_regularActionFont;
- (double)horizontalImageContentSpacing;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;
- (double)verticalImageContentSpacing;

@end
