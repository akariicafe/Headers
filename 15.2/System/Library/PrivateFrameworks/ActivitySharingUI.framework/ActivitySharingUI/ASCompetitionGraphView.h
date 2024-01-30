@class UIFont, NSString, ASCompetition, UIColor, NSDateFormatter;

@interface ASCompetitionGraphView : UIView {
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) ASCompetition *competition;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *dateFormat;
@property (nonatomic) double horizontalInset;
@property (nonatomic) double barWidth;
@property (nonatomic) double spaceBetweenBars;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double dayLabelBaselineOffset;
@property (nonatomic) double maxBarHeight;
@property (retain, nonatomic) UIFont *currentDateFont;
@property (retain, nonatomic) UIFont *dateFont;
@property (retain, nonatomic) UIColor *dateColor;
@property (retain, nonatomic) UIColor *highlightedDateColor;
@property (nonatomic) BOOL highlightsCurrentDay;
@property (nonatomic) BOOL showsBackgroundDateGuide;
@property (nonatomic) BOOL showsBackgroundScoreGuide;
@property (nonatomic) BOOL drawsDailyScoreLabels;
@property (nonatomic) BOOL drawsFutureScoreDots;
@property (readonly, nonatomic) double lastBaselineY;

+ (id)companionGraph;
+ (id)gizmoGraph;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)preferredHeight;
- (unsigned long long)_maxDailyScore;
- (id)_attributesForDateLabelWithDate:(id)a0;
- (double)_firstBarOriginXForDateLabelOriginX:(double)a0 dateLabelWidth:(double)a1;
- (double)_percentForScoreAtIndex:(unsigned long long)a0 scores:(id)a1 maxScore:(unsigned long long)a2;
- (id)_allScores;
- (unsigned long long)_minDailyScore;

@end
