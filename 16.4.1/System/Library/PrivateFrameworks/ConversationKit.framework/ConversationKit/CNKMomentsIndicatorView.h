@class NSMutableDictionary;

@interface CNKMomentsIndicatorView : UIView <CNKMomentsIndicatorBubbleDelegate>

@property (retain, nonatomic) NSMutableDictionary *bubblesByType;
@property (nonatomic) long long displayStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)bottomConstraintForBubble:(id)a0 inBubbles:(id)a1;
- (id)bottomConstraintForBubble:(id)a0 style:(long long)a1;
- (id)commonConstraintsForBubble:(id)a0;
- (void)didTimeOutForMomentsIndicatorBubble:(id)a0;
- (void)presentCaptureIndicatorWithType:(long long)a0 forRemoteParticipantNamed:(id)a1;
- (void)refreshLayout;

@end
