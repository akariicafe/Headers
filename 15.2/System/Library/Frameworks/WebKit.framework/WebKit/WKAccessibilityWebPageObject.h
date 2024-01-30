@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase

@property (retain, nonatomic) NSData *remoteTokenData;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityCategoryInstalled:(id)a0;
- (id)init;
- (void)dealloc;
- (double)pageScale;

@end
