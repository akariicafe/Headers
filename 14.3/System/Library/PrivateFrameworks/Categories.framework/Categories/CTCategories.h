@class NSArray, NSString, NSLock;

@interface CTCategories : NSObject {
    NSString *_indexVersionId;
    NSLock *_lookupLock;
}

@property (class, readonly) CTCategories *sharedCategories;

@property (readonly, copy) NSArray *availableCategoryIDs;

+ (void)initialize;
+ (long long)currentIOSDevice;
+ (id)systemUnblockableBundleIdentifiers;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemBundleIdentifiers;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemHiddenBundleIdentifiers;
+ (id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemBlockableBundleIdentifiers;

- (void)categoryForDomainURL:(id)a0 response:(id /* block */)a1;
- (void)categoriesForBundleIDs:(id)a0 response:(id /* block */)a1;
- (void)_emptySharedCache:(id)a0;
- (void)categoriesForDomainNames:(id)a0 response:(id /* block */)a1;
- (void)categoryForDomainName:(id)a0 responseWithError:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)categoriesForDomainURLs:(id)a0 responseWithError:(id /* block */)a1;
- (void)dealloc;
- (void)categoriesForDomainURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForBundleID:(id)a0 response:(id /* block */)a1;
- (void)categoryForDomainName:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForDomainURL:(id)a0 responseWithError:(id /* block */)a1;
- (void)categoriesForDomainNames:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoriesForBundleIDs:(id)a0 responseWithError:(id /* block */)a1;
- (void)categoriesForBundleIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForBundleID:(id)a0 responseWithError:(id /* block */)a1;
- (void)unCategorizedDomainsFromDomains:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)categoriesForBundleIDs:(id)a0 platform:(id)a1 completionHandler:(id /* block */)a2;
- (void)categoryForDomainName:(id)a0 response:(id /* block */)a1;
- (void)categoriesForDomainNames:(id)a0 responseWithError:(id /* block */)a1;
- (void)categoriesForDomainURLs:(id)a0 response:(id /* block */)a1;
- (void)categoryForDomainURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForBundleID:(id)a0 platform:(id)a1 completionHandler:(id /* block */)a2;

@end
