@class UIColor, UIFont, NSString;

@interface CNUINavigationListStyleProviderImpl : NSObject <CNUINavigationListStyle>

@property (readonly, nonatomic) UIColor *cellBackgroundColor;
@property (readonly, nonatomic) UIColor *cellBackgroundExpandedColor;
@property (readonly, nonatomic) UIColor *cellBackgroundHighlightedColor;
@property (readonly, nonatomic) UIColor *cellTitleTextColor;
@property (readonly, nonatomic) UIColor *cellTitleTextHighlightedColor;
@property (readonly, nonatomic) UIColor *cellSubtitleTextColor;
@property (readonly, nonatomic) UIColor *cellSubtitleTextHighlightedColor;
@property (readonly, nonatomic) UIColor *detailCellTitleTextColor;
@property (readonly, nonatomic) UIColor *detailCellTitleTextHighlightedColor;
@property (readonly, nonatomic) UIColor *detailCellSubtitleTextColor;
@property (readonly, nonatomic) UIColor *detailCellSubtitleTextHighlightedColor;
@property (readonly, nonatomic) UIColor *actionIconFillColor;
@property (readonly, nonatomic) UIColor *actionIconFillHighlightedColor;
@property (readonly, nonatomic) UIFont *cellTitleFont;
@property (readonly, nonatomic) UIFont *cellSubtitleFont;
@property (readonly, nonatomic) UIFont *detailCellTitleFont;
@property (readonly, nonatomic) UIFont *detailCellSubtitleFont;
@property (readonly, nonatomic) double cellUserActionLeftMargin;
@property (readonly, nonatomic) double cellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) double cellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) double cellContentViewBottomAnchorConstraintConstant;
@property (readonly, nonatomic) double detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) double detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) double detailCellContentViewBottomAnchorConstraintConstant;
@property (readonly, nonatomic) BOOL showCellSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
