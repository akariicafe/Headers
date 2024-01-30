@interface MFComposeRecipientViewAccessibility : __MFComposeRecipientViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeRecipient:(id)a0;
- (void)_reflowAnimated:(BOOL)a0;
- (void)addRecipient:(id)a0 index:(unsigned long long)a1 animate:(BOOL)a2;

@end
