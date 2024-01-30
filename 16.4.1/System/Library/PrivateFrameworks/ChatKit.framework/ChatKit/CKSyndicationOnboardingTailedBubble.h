@class NSAttributedString;

@interface CKSyndicationOnboardingTailedBubble : CKPinnedConversationRichLinkBubble

@property (nonatomic) long long appName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bubbleFrame;
@property (retain, nonatomic) NSAttributedString *bubbleText;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)pillCornerRadius;
- (double)balloonTailHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAppName:(long long)a1 withLPLinkView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pillRect;

@end
