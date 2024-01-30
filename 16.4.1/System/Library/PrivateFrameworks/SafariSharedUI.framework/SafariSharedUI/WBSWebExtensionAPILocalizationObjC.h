@class WBSWebExtensionLocalization;

@interface WBSWebExtensionAPILocalizationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionLocalization *_localization;
}

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

@end
