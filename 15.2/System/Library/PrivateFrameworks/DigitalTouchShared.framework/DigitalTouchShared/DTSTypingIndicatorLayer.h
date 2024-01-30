@interface DTSTypingIndicatorLayer : IMTypingIndicatorLayer

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconImageFrame;
+ (double)iconImageLeadingSpace;
+ (id)defaultBubbleColor;
+ (id)defaultThinkingDotColor;

- (id)iconImage;
- (id)init;

@end
