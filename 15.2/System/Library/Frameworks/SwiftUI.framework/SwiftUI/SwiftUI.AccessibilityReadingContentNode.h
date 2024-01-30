@interface SwiftUI.AccessibilityReadingContentNode : SwiftUI.AccessibilityNode <UIAccessibilityReadingContent>

- (id)accessibilityPageContent;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityContentForLineNumber:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForLineNumber:(long long)a0;
- (id)accessibilityAttributedContentForLineNumber:(long long)a0;
- (id)accessibilityAttributedPageContent;

@end
