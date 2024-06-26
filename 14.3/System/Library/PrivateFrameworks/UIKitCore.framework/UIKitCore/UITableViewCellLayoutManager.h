@interface UITableViewCellLayoutManager : NSObject

+ (void)initialize;
+ (BOOL)requiresLegacyLayout;
+ (id)sharedLayoutManager;
+ (id)_externalTextColor;
+ (id)layoutManagerForTableViewCellStyle:(long long)a0;
+ (id)_externalDetailTextColor;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reorderSeparatorStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingAccessoryStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGSize { double x0; double x1; })optimumSizeForLabel:(id)a0 inTotalTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimizeWidthOnVerticalOverflow:(BOOL)a2 preferSingleLineWidth:(BOOL)a3;
- (id)imageViewForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reorderControlStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reorderSeparatorEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacy_contentRectForCell:(id)a0 forEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2 rowWidth:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingAccessoryEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reorderControlEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundRectForCell:(id)a0 rowWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedBackgroundRectForCell:(id)a0 rowWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedBackgroundContentRectForCell:(id)a0 rowWidth:(double)a1;
- (BOOL)accessoryShouldAppearForCell:(id)a0;
- (double)contentIndentationForCell:(id)a0;
- (BOOL)_editControlOnSameSideAsReorderControlForCell:(id)a0;
- (BOOL)reorderControlShouldAppearForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_reorderControlRectForCell:(id)a0 offscreen:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedBackgroundContentRectForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessoryRectForCell:(id)a0 offscreen:(BOOL)a1;
- (BOOL)editingAccessoryShouldAppearForCell:(id)a0;
- (id)customAccessoryViewForCell:(id)a0 editing:(BOOL)a1;
- (BOOL)reorderSeparatorShouldAppearForCell:(id)a0;
- (BOOL)editControlShouldAppearForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_reorderSeparatorRectForCell:(id)a0 offscreen:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedBackgroundRectForCell:(id)a0;
- (BOOL)shouldStackAccessoryViewVerticallyForCell:(id)a0 editing:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editingAccessoryRectForCell:(id)a0 offscreen:(BOOL)a1;
- (BOOL)shouldApplyAccessibilityLargeTextLayoutForCell:(id)a0;
- (BOOL)shouldIncreaseMarginForImageViewInCell:(id)a0;
- (double)_contentRectLeadingOffsetForCell:(id)a0 editingState:(BOOL)a1 rowWidth:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessoryRectForCell:(id)a0 offscreen:(BOOL)a1 rowWidth:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editControlRectForCell:(id)a0 offscreen:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForCell:(id)a0 forEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2 rowWidth:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundRectForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForCell:(id)a0 forEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editControlStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editControlEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (BOOL)editControlShouldFadeForCell:(id)a0;
- (BOOL)reorderControlShouldFadeForCell:(id)a0;
- (BOOL)reorderSeparatorShouldFadeForCell:(id)a0;
- (BOOL)accessoryShouldFadeForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (BOOL)editingAccessoryShouldFadeForCell:(id)a0;
- (void)_resetTextLabelDefaultFontInCell:(id)a0;
- (id)defaultTextLabelFontForCell:(id)a0;
- (id)defaultLabelForCell:(id)a0 ofClass:(Class)a1;
- (id)defaultImageViewForCell:(id)a0;
- (id)defaultLabelForCell:(id)a0;
- (id)defaultBadgeForCell:(id)a0;
- (void)_modern_layoutSubviewsOfCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForCell:(id)a0 forState:(unsigned long long)a1 rowWidth:(double)a2;
- (void)_legacy_layoutSubviewsOfCell:(id)a0;
- (void)_layoutFocusGuidesForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectedBackgroundEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (double)requiredIndentationForFirstLineOfCell:(id)a0 rowWidth:(double)a1;
- (void)_legacy_cell:(id)a0 willTransitionToState:(unsigned long long)a1;
- (void)_modern_cell:(id)a0 didTransitionToState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForCell:(id)a0 rowWidth:(double)a1;
- (void)_legacy_cell:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)_updateFocusGuidesForCell:(id)a0 editing:(BOOL)a1;
- (void)_reconfigureCell:(id)a0;
- (double)requiredIndentationForFirstLineOfCell:(id)a0 rowWidth:(double)a1 forSizing:(BOOL)a2;
- (id)badgeForCell:(id)a0;
- (id)defaultEditableTextFieldForCell:(id)a0;
- (void)cell:(id)a0 willTransitionToState:(unsigned long long)a1;
- (void)cell:(id)a0 didTransitionToState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForCell:(id)a0 forState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0 rowWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentStartingRectForCell:(id)a0 forDisplayOfDeleteConfirmation:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentEndingRectForCell:(id)a0 forDisplayOfDeleteConfirmation:(BOOL)a1;
- (void)prepareCellForReuse:(id)a0;
- (id)defaultDetailTextLabelFontForCell:(id)a0;
- (void)getTextLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 detailTextLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forCell:(id)a2 rowWidth:(double)a3 forSizing:(BOOL)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1;
- (double)defaultTextLabelFontSizeForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0 rowWidth:(double)a1 forSizing:(BOOL)a2;
- (id)editableTextFieldForCell:(id)a0;
- (void)layoutSubviewsOfCell:(id)a0;
- (id)detailTextLabelForCell:(id)a0;
- (id)textLabelForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standardLayoutImageViewFrameForCell:(id)a0 forSizing:(BOOL)a1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)a0;

@end
