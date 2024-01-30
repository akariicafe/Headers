@interface AXUIKitGlue : UIAccessibilityLoader

+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (id)wrapDOMRange:(id)a0;
+ (void)_handleWebKitLegacyInstallation;
+ (id)sharedGlueObjectIfAvailable;

@end
