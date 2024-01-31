@class UITextView;

@interface AXCKMentionSubelement : UIAccessibilityElement

@property (weak, nonatomic) UITextView *accessibilityContainerTextView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) int type;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)initWithTextView:(id)a0;
- (void).cxx_destruct;
- (id)_textRangeForTextView:(id)a0;

@end
