@class NSDictionary, UITextView;

@interface ICBaseLayoutManager : NSLayoutManager

@property (class, readonly, nonatomic) NSDictionary *defaultLinkTextAttributes;

@property (weak, nonatomic) UITextView *textView;

+ (id)linkTextAttributesForHighlightValue:(double)a0;

- (id)textContainer;
- (void).cxx_destruct;
- (void)drawBulletsForListRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphStyle:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (double)bulletYOffsetForCharacterAtIndex:(unsigned long long)a0;
- (id)textController;
- (void)drawListStylesForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
