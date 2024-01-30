@class NSAttributedString;

@interface CKSyndicationOnboardingTailedBubble : CKPinnedConversationRichLinkBubble

@property (nonatomic) long long appName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bubbleFrame;
@property (retain, nonatomic) NSAttributedString *bubbleText;

- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pillRect;
- (double)balloonTailHeight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAppName:(long long)a1 withLPLinkView:(id)a2;
- (double)pillCornerRadius;
- (void).cxx_destruct;

@end
