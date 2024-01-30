@class UITextView, NSString, UIImageView, CAAnimation, UITapGestureRecognizer;
@protocol CKAvatarNotificationCalloutViewDelegate;

@interface CKAvatarNotificationCalloutView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) CAAnimation *starterAniamtion;
@property (retain, nonatomic) CAAnimation *finisherAnimation;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id<CKAvatarNotificationCalloutViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animateOut;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewText:(id)a1 mode:(long long)a2;
- (void)animateIn;
- (void).cxx_destruct;
- (BOOL)_shouldShowShadow;

@end
