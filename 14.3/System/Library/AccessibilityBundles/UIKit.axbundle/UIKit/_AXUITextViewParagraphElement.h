@class NSString, NSArray;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) NSString *_accessibilityContent;
@property (readonly, nonatomic) NSArray *links;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityElements;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilityUserTestingChildren;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)initWithAccessibilityContainer:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 links:(id)a2;

@end
