@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase

@property (retain, nonatomic) NSData *remoteTokenData;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)_accessibilityCategoryInstalled:(id)a0;
- (id)init;
- (double)pageScale;

@end
