@class NSString, NSError, CNContactsProviderSession;

@interface Contacts.CNContactsProviderHost : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)disableExtensionWith:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)enableExtensionWith:(NSString *)a0 showPrompt:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;
- (id)extensionCount;
- (id)extensionItems;
- (id)isExtensionEnabledWith:(id)a0;
- (id)providerContainerFor:(id)a0;
- (void)synchronizeUsing:(CNContactsProviderSession *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;

@end
