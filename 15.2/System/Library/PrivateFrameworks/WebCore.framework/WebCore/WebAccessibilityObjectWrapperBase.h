@interface WebAccessibilityObjectWrapperBase : NSObject {
    void *m_axObject;
}

@property (nonatomic) unsigned long long identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (void)detach;
- (id)attachmentView;
- (id)innerHTML;
- (id)initWithAccessibilityObject:(void *)a0;
- (void)accessibilityPostedNotification:(id)a0;
- (id)_accessibilityWebDocumentView;
- (void *)axBackingObject;
- (BOOL)_prepareAccessibilityCall;
- (struct CGPath { } *)convertPathToScreenSpace:(const void *)a0;
- (id)ariaLandmarkRoleDescription;
- (id)baseAccessibilityHelpText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { BOOL x0; BOOL x1; float x2; float x3; } x1; } *)a0 space:(int)a1;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;
- (id)baseAccessibilityResolvedEditingStyles;
- (id)contentForSimpleRange:(const void *)a0 attributed:(BOOL)a1;
- (id)baseAccessibilitySpeechHint;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)outerHTML;
- (void)attachAXObject:(void *)a0;
- (BOOL)isIsolatedObject;
- (id)baseAccessibilityDescription;
- (id)lineRectsAndText;

@end
