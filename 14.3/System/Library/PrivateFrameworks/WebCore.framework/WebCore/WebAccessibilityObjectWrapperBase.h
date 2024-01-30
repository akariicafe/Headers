@interface WebAccessibilityObjectWrapperBase : NSObject {
    struct AXCoreObject { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x0; } x2; } *m_axObject;
}

@property (nonatomic) unsigned long long identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (void)detach;
- (void)attachAXObject:(struct AXCoreObject { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x0; } x2; } *)a0;
- (struct AXCoreObject { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x0; } x2; } *)updateObjectBackingStore;
- (BOOL)isIsolatedObject;
- (id)attachmentView;
- (id)initWithAccessibilityObject:(struct AXCoreObject { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x0; } x2; } *)a0;
- (void)accessibilityPostedNotification:(id)a0;
- (struct AXCoreObject { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x0; } x2; } *)axBackingObject;
- (struct CGPath { } *)convertPathToScreenSpace:(const struct Path { struct RetainPtr<CGPath *> { void *x0; } x0; struct Variant<WTF::Monostate, WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData> { union __variant_data<WTF::Monostate, WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData> { union __variant_data<WTF::Monostate> { struct Monostate { } x0; struct __dummy_type { } x1; } x0; union __variant_data<WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData> { union __variant_data<WebCore::MoveData> { struct __storage_wrapper<WebCore::MoveData> { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData> { union __variant_data<WebCore::LineData> { struct __storage_wrapper<WebCore::LineData> { struct type { unsigned char x0[16]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData> { union __variant_data<WebCore::ArcData> { struct __storage_wrapper<WebCore::ArcData> { struct type { unsigned char x0[32]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WebCore::QuadCurveData, WebCore::BezierCurveData> { union __variant_data<WebCore::QuadCurveData> { struct __storage_wrapper<WebCore::QuadCurveData> { struct type { unsigned char x0[24]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WebCore::BezierCurveData> { struct __storage_wrapper<WebCore::BezierCurveData> { struct type { unsigned char x0[32]; } x0; } x0; struct __dummy_type { } x1; } x1; } x1; } x1; } x1; } x1; } x0; char x1; } x1; BOOL x2; } *)a0;
- (id)baseAccessibilityDescription;
- (id)baseAccessibilityTitle;
- (id)ariaLandmarkRoleDescription;
- (id)baseAccessibilityHelpText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a0 space:(int)a1;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;
- (id)_accessibilityWebDocumentView;
- (id)baseAccessibilityResolvedEditingStyles;
- (void)baseAccessibilitySetFocus:(BOOL)a0;
- (id)baseAccessibilitySpeechHint;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;

@end
