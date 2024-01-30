@class NTKUpNextMatchupUpcomingView, UILayoutGuide, NTKUpNextMatchupScoreView;

@interface NTKUpNextMatchupCell : NTKUpNextBaseCell {
    NTKUpNextMatchupScoreView *_scoreView;
    NTKUpNextMatchupUpcomingView *_upcomingView;
    UILayoutGuide *_scoreLayoutGuide;
    UILayoutGuide *_upcomingLayoutGuide;
}

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)updateTimeLabel;
- (void)setFilterProvider:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
