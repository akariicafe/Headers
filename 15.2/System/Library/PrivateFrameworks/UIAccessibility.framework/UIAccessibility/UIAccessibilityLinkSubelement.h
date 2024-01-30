@class NSURL;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSURL *url;

- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)textRangeForTextView:(id)a0;

@end
