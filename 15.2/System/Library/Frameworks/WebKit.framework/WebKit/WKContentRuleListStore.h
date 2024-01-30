@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListStore> { struct type { unsigned char __lx[48]; } data; } _contentRuleListStore;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storeWithURL:(id)a0;
+ (id)defaultStore;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURLAndLegacyFilename:(id)a0;

- (void)_compileContentRuleListForIdentifier:(id)a0 encodedContentRuleList:(id)a1 completionHandler:(id /* block */)a2;
- (void)compileContentRuleListForIdentifier:(id)a0 encodedContentRuleList:(id)a1 completionHandler:(id /* block */)a2;
- (void)lookUpContentRuleListForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAvailableContentRuleListIdentifiers:(id /* block */)a0;
- (void)removeContentRuleListForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)a0;
- (void)_getContentRuleListSourceForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)compileContentExtensionForIdentifier:(id)a0 encodedContentExtension:(id)a1 completionHandler:(id /* block */)a2;
- (void)lookupContentExtensionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeContentExtensionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_removeAllContentRuleLists;

@end
