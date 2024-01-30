@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListStore> { struct type { unsigned char __lx[48]; } data; } _contentRuleListStore;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultStore;
+ (id)storeWithURL:(id)a0;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURLAndLegacyFilename:(id)a0;

- (void)_removeAllContentRuleLists;
- (void)dealloc;
- (void)lookUpContentRuleListForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getContentRuleListSourceForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)a0;
- (void)compileContentRuleListForIdentifier:(id)a0 encodedContentRuleList:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAvailableContentRuleListIdentifiers:(id /* block */)a0;
- (void)removeContentExtensionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeContentRuleListForIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
