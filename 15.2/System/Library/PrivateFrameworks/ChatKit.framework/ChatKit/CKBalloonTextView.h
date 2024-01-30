@class UIPanGestureRecognizer, NSString, NSAttributedString, UITapGestureRecognizer;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate, UIGestureRecognizerDelegate, UITextViewDelegate>

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
@property (weak, nonatomic) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, getter=isFakeSelected) BOOL fakeSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textView;

- (void)_interactionStartedFromPreviewItemController:(id)a0;
- (void)_interactionStoppedFromPreviewItemController:(id)a0;
- (void)copy:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_textWithHyphenationAppliedForAttributedText:(id)a0;
- (void)_setFakeSelectionBackgroundColorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canBecomeFocused;
- (id)_fakeSelectionBackgroundColor;
- (void)_removeFakeSelectionBackgroundColorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_setFakeSelectionBackgroundColor;
- (void)_removeFakeSelectionBackgroundColor;
- (void)_updateFakeSelectionBackgroundColor:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)panGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)registerForEvents;
- (BOOL)becomeFirstResponder;
- (void)didMoveToWindow;
- (BOOL)_showsEditMenu;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2 isReplyPreview:(BOOL)a3;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
