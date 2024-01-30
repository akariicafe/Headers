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

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (void)setAccessibilityRespondsToUserInteraction:(BOOL)a0;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;

@end
