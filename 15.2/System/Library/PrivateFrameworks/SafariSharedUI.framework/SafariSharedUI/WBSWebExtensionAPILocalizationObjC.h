@class WBSWebExtensionLocalization;

@interface WBSWebExtensionAPILocalizationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionLocalization *_localization;
}

@property (readonly, nonatomic) void *cpp;

+ (id)localizationWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;
- (id)getMessageWithName:(id)a0 substitutions:(id)a1;
- (id)getUILanguage;
- (void)getAcceptLanguagesWithCompletionHandler:(id)a0;

@end
