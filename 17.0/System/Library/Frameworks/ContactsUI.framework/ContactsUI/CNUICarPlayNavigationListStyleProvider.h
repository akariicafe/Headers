@interface CNUICarPlayNavigationListStyleProvider : CNUINavigationListStyleProviderImpl

- (id)cellBackgroundColor;
- (id)actionIconFillColor;
- (id)actionIconFillHighlightedColor;
- (id)cellBackgroundExpandedColor;
- (id)cellBackgroundHighlightedColor;
- (double)cellContentViewBottomAnchorConstraintConstant;
- (id)cellSubtitleTextColor;
- (id)cellSubtitleTextHighlightedColor;
- (id)cellTitleFont;
- (double)cellTitleLabelFirstBaselineAnchorConstraintConstant;
- (id)cellTitleTextColor;
- (id)cellTitleTextHighlightedColor;
- (double)cellUserActionLeftMargin;
- (double)detailCellContentViewBottomAnchorConstraintConstant;
- (id)detailCellSubtitleFont;
- (double)detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
- (id)detailCellSubtitleTextColor;
- (id)detailCellSubtitleTextHighlightedColor;
- (id)detailCellTitleFont;
- (double)detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
- (id)detailCellTitleTextColor;
- (id)detailCellTitleTextHighlightedColor;
- (BOOL)showCellSeparator;

@end
