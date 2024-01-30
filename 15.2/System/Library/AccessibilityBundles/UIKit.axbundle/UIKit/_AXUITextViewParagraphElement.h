@class NSString, NSNumber, NSArray;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate> {
    NSString *__accessibilityContent;
    NSNumber *__accessibilityRespondsToUserInteractionOverride;
    NSArray *_links;
    struct _NSRange { unsigned long long location; unsigned long long length; } _textRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAccessibilityRespondsToUserInteraction:(BOOL)a0;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;

@end
