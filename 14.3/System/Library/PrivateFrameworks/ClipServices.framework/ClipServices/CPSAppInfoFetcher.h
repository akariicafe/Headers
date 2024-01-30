@class NSString, NSCache;

@interface CPSAppInfoFetcher : NSObject <CPSAppInfoFetching> {
    NSCache *_appMetadataByBundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedAMSBag;
+ (id)_cachedIconFileURLForItemID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)lookUpClipMetadataByBundleID:(id)a0 sourceBundleID:(id)a1 downloadIconIfNeeded:(BOOL)a2 skipCaching:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_downloadIconIfNeeded:(id)a0 completionHandler:(id /* block */)a1;
- (void)_lookUpClipDemoAMSMetadataWithBundleID:(id)a0 completion:(id /* block */)a1;

@end
