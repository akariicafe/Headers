@interface CNUICarPlayNavigationListStyleProvider : CNUINavigationListStyleProviderImpl

- (BOOL)showCellSeparator;
- (id)cellTitleFont;
- (id)cellTitleTextColor;
- (id)cellSubtitleTextColor;
- (id)cellBackgroundExpandedColor;
- (id)cellBackgroundHighlightedColor;
- (id)cellTitleTextHighlightedColor;
- (id)detailCellTitleTextColor;
- (id)cellSubtitleTextHighlightedColor;
- (id)detailCellTitleTextHighlightedColor;
- (id)actionIconFillColor;
- (id)detailCellSubtitleTextColor;
- (id)detailCellSubtitleTextHighlightedColor;
- (id)detailCellTitleFont;
- (id)actionIconFillHighlightedColor;
- (id)detailCellSubtitleFont;
- (double)cellUserActionLeftMargin;
- (double)cellTitleLabelFirstBaselineAnchorConstraintConstant;
- (double)cellContentViewBottomAnchorConstraintConstant;
- (double)detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
- (double)detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)detailCellContentViewBottomAnchorConstraintConstant;
- (id)cellBackgroundColor;

@end
