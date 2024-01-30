@class NSNumber, UIImageView, ASCompetitionScoreViewConfiguration, UILabel, ASCompetitionParticipantScoreView;

@interface ASCompetitionScoreView : UIView {
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    NSNumber *_previousLayoutWidth;
    BOOL _isRTLLayout;
}

@property (readonly, nonatomic) double lastBaselineY;

+ (double)preferredHeightForConfiguration:(id)a0 friend:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)participantScoreViewWidthForParticipant:(long long)a0 maximumWidth:(double)a1;
- (void)setFriend:(id)a0 competition:(id)a1;

@end
