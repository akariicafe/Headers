@interface BFFStyle : NSObject

+ (id)sharedStyle;

- (id)backgroundColor;
- (id)headerTitleFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForTable:(id)a0;
- (void)applyThemeToLabel:(id)a0;
- (id)continueButtonWithTitle:(id)a0 inView:(id)a1;
- (void)applyThemeToNavigationController:(id)a0;
- (double)horizontalMarginForView:(id)a0;
- (void)applyThemeToTitleLabel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })horizontalInsetsForContainingInView:(id)a0 width:(double)a1;
- (void)applyThemeToSectionHeaderLabel:(id)a0;
- (struct CGSize { double x0; double x1; })_effectiveSizeForIconSize:(struct CGSize { double x0; double x1; })a0 inView:(id)a1;
- (void)applyAutomaticScrollToEdgeBehaviorOnNavgationItem:(id)a0;
- (void)applyThemeToAllTableViews;
- (void)applyThemeToNavigationController:(id)a0 allowUnderlap:(BOOL)a1;
- (void)applyThemeToRemoteUIWebViewController:(id)a0;
- (void)applyThemeToTableCell:(id)a0;
- (void)applyThemeToTextView:(id)a0;
- (double)baselineInsetForHeaderTitle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForHeaderView:(id)a0;
- (double)headerIconBaselineOffset;
- (double)headerIconBaselineOffsetForView:(id)a0;
- (double)headerSubheaderBaselineSpacingForView:(id)a0;
- (double)headerTitleBaselineOffsetForView:(id)a0 hasIcon:(BOOL)a1;
- (double)headerTitleBaselineOffsetForView:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1;
- (double)headerTitleBaselineOffsetHasIcon:(BOOL)a0;
- (double)headerYOffsetForIcon:(id)a0 inView:(id)a1;
- (double)headerYOffsetForIconSize:(struct CGSize { double x0; double x1; })a0 inView:(id)a1;
- (double)nonTableHorizontalMargin;
- (double)screenHeaderFooterSideInsetForView:(id)a0;
- (double)screenHeaderHeightForView:(id)a0;
- (double)singleLineCellHeightForTable:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForContinueButtonInAncestor:(id)a0;
- (id)tableCellFont;
- (double)tallRowHeight;

@end
