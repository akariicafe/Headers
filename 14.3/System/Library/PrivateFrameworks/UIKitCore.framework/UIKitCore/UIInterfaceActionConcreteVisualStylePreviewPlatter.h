@class UIFont;

@interface UIInterfaceActionConcreteVisualStylePreviewPlatter : UIInterfaceActionConcreteVisualStyle_iOSSheet {
    UIFont *_labelFont;
}

- (double)contentCornerRadius;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)_labelFont;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)newSectionSeparatorViewForGroupViewState:(id)a0;
- (double)actionSectionSpacing;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (id)actionTitleLabelColorForViewState:(id)a0;

@end
