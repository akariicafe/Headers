@interface SBFDashBoardViewMetrics : NSObject

+ (BOOL)_isPortrait;
+ (double)listMinYForPage:(unsigned long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })suggestedContentInsetsForListForPage:(unsigned long long)a0 pageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scrollsDateTime:(BOOL)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForListForPage:(unsigned long long)a0 pageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (double)dateBaselineToListY;
+ (double)_phoneSpecificValueN56:(double)a0 n61:(double)a1 n69:(double)a2;
+ (unsigned long long)listLayoutForPage:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForStatusView:(id)a0 inView:(id)a1 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (double)timeToListInsetXforPage:(unsigned long long)a0;
+ (id)dateFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForMediaArtworkForControlsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bottomInset:(double)a1 inPageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (double)searchBarWidth;
+ (unsigned long long)dateTimeLayoutForPage:(unsigned long long)a0;
+ (double)_padSpecificValueJ99:(double)a0 otherPad:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForCallToActionLabel:(id)a0 yOffset:(double)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (double)timeLabelToSubtitleLabelDifferenceY;
+ (double)singleLineDateViewBaselineDifferenceY;
+ (BOOL)listScrollsDateTime;
+ (double)timeLabelToLunarDateLabelDifferenceY;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForListForPage:(unsigned long long)a0 pageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)layoutUsesMargin:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 centeredX:(BOOL)a1;
+ (double)_padSpecificValueForDevice:(struct SBFDashBoardOrientationLeadingInsets { double x0; double x1; double x2; double x3; })a0 leading:(BOOL)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cachedGlyphInsetsForString:(id)a0 withFont:(id)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })suggestedContentInsetsForListForPage:(unsigned long long)a0 pageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (double)_phoneSpecificValueN56:(double)a0 n61:(double)a1 n69:(double)a2 d22:(double)a3;
+ (double)scaledFontSize:(double)a0 withMaximumFontSizeCategory:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForMediaControlsForPageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)timeLabelScrollPercentForPage:(unsigned long long)a0;
+ (BOOL)layoutCentersContent:(unsigned long long)a0;
+ (double)listInsetXForPage:(unsigned long long)a0;
+ (double)timeToSubtitleLabelBaselineDifferenceY;
+ (double)searchClippingLineMaxY;
+ (double)dateOnlyLabelToLunarDateLabelBaselineDifferenceY;
+ (double)timeSubtitleBaselineY;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_reducedPageBoundsFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPage:(unsigned long long)a1;
+ (BOOL)_presentsListBelowDateTime;
+ (id)dateOnlyLunarDateFont;
+ (double)timeLabelBaselineY;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForListForPage:(unsigned long long)a0 pageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 scrollsDateTime:(BOOL)a3;
+ (double)listWidthForPage:(unsigned long long)a0;
+ (double)_dateTimeMinXForReducedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPage:(unsigned long long)a1;
+ (double)_padSpecificInsets:(struct SBFDashBoardPadPageInsets { struct SBFDashBoardOrientationLeadingInsets { double x0; double x1; double x2; double x3; } x0; struct SBFDashBoardOrientationLeadingInsets { double x0; double x1; double x2; double x3; } x1; struct SBFDashBoardOrientationLeadingInsets { double x0; double x1; double x2; double x3; } x2; })a0 leading:(BOOL)a1;
+ (double)listInsetXForPage:(unsigned long long)a0 leading:(BOOL)a1;

@end
