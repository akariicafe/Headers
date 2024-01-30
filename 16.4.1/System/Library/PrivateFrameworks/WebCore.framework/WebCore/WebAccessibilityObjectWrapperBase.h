@interface WebAccessibilityObjectWrapperBase : NSObject {
    void *m_axObject;
}

@property (nonatomic) struct ObjectIdentifier<WebCore::AXIDType> { unsigned long long m_identifier; } identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (id).cxx_construct;
- (void)detach;
- (id)innerHTML;
- (id)accessibilityCustomContent;
- (id)attachmentView;
- (id)accessibilityMathPrescriptPairs;
- (void)attachAXObject:(void *)a0;
- (void *)axBackingObject;
- (id)_accessibilityWebDocumentView;
- (BOOL)_prepareAccessibilityCall;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (void)accessibilityPostedNotification:(id)a0;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (id)ariaLandmarkRoleDescription;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilityResolvedEditingStyles;
- (id)baseAccessibilitySpeechHint;
- (void *)baseUpdateBackingStore;
- (id)contentForSimpleRange:(const void *)a0 attributed:(BOOL)a1;
- (struct CGPath { } *)convertPathToScreenSpace:(const void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a0 space:(int)a1;
- (id)initWithAccessibilityObject:(void *)a0;
- (BOOL)isIsolatedObject;
- (id)lineRectsAndText;
- (id)outerHTML;

@end
