@class ASCompetitionTimeRemainingLabel, NSNumber, ASCompetitionScoreView, UIView, ASCompetitionGraphView, ASCompetitionMessageBubbleView;

@interface ASCompetitionGizmoDetailView : UIView {
    ASCompetitionScoreView *_totalScoreView;
    ASCompetitionScoreView *_totalWinsScoreView;
    ASCompetitionGraphView *_graphView;
    ASCompetitionTimeRemainingLabel *_timeRemainingLabel;
    ASCompetitionMessageBubbleView *_messageBubbleView;
    UIView *_timeRemainingSeparator;
    UIView *_totalWinsSeparator;
    NSNumber *_previousLayoutWidth;
    long long _modules;
    long long _type;
}

@property (nonatomic) BOOL isInteractionEnabled;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFriend:(id)a0 competition:(id)a1;
- (id)initWithDetailViewType:(long long)a0;
- (BOOL)supportsSmackTalkReply;

@end
