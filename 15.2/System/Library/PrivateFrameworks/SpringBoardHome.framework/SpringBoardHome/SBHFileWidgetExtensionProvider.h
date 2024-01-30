@interface SBHFileWidgetExtensionProvider : SBHRecentsDocumentExtensionProvider

@property (nonatomic) BOOL widgetHasTransparentBackground;

- (void)setWidgetConfiguration:(id)a0;
- (id)init;
- (id)_preferredExtensionIdentifier;
- (void)_setupHostViewController:(id)a0;
- (BOOL)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)a0;
- (BOOL)_extensionHasTransparencyEntitlement:(id)a0;
- (id)filesWidgetViewControllerWithConfiguration:(id)a0;

@end
