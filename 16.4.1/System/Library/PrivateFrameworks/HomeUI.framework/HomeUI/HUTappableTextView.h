@class UITapGestureRecognizer, NSString;
@protocol HUTappableTextViewDelegate;

@interface HUTappableTextView : UITextView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (weak, nonatomic) id<HUTappableTextViewDelegate> tappableTextViewDelegate;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureTapRecognizer;

@end
