@interface EMKEmojiOverlayElement : UIAccessibilityElement

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rowRange;

- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;

@end
