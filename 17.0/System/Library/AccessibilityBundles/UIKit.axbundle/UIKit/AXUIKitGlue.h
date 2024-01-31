@interface AXUIKitGlue : UIAccessibilityLoader

+ (id)wrapDOMRange:(id)a0;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (id)sharedGlueObjectIfAvailable;

@end
