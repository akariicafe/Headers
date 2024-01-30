@class WBSFaviconProviderPrivateCache, NSString, NSURL, WBSFaviconProviderDatabaseController, NSObject, WBSOnDiskDataCache, NSMapTable, WBSFaviconProviderRecordCache;
@protocol OS_dispatch_queue;

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate> {
    NSURL *_baseURL;
    WBSOnDiskDataCache *_faviconDiskCache;
    WBSFaviconProviderDatabaseController *_faviconDatabase;
    WBSFaviconProviderRecordCache *_recordsCache;
    WBSFaviconProviderPrivateCache *_privateCache;
    NSMapTable *_inMemoryImageCache;
    id /* block */ _setUpCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _controllerState;
    struct CGSize { double width; double height; } _preferredIconSize;
    BOOL _isReadOnly;
}

@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) NSURL *diskCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIconData:(id)a0 forPageURLString:(id)a1 iconURLString:(id)a2 iconSize:(struct CGSize { double x0; double x1; })a3 hasGeneratedResolutions:(BOOL)a4 isPrivate:(BOOL)a5 completionHandler:(id /* block */)a6;
- (id)initWithPersistenceBaseURL:(id)a0 databaseName:(id)a1 preferredIconSize:(struct CGSize { double x0; double x1; })a2 isReadOnly:(BOOL)a3;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)iconForPageURLString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;
- (long long)_faviconStatusFromWBSSQLStoreStatus:(long long)a0;
- (void)dataCacheDidSetUp:(id)a0;
- (void)_iconForIconUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)firstIconForVariantsOfDomainString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)a0 completionHandler:(id /* block */)a1;
- (void)iconForIconURLString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_finishSetUpWithStatus:(long long)a0;
- (id)_imageFromURL:(id)a0;
- (void)iconInfoForPageURLString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)a0;
- (void)removeAllIconsWithCompletionHandler:(id /* block */)a0;
- (void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)openAndCheckIntegrity:(BOOL)a0 createIfNeeded:(BOOL)a1 fallBackToMemoryStoreIfError:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)rejectedResourceInfosForPageURLString:(id)a0 iconURLString:(id)a1 includingPrivateData:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)linkPageURLString:(id)a0 toIconURLString:(id)a1 isPrivate:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)removeIconsWithURLStringsNotFoundIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)setIconIsRejectedResource:(BOOL)a0 forPageURLString:(id)a1 iconURLString:(id)a2 isPrivate:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)firstIconForVariantsOfPageURLString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)savePendingChangesBeforeTermination;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)a0;
- (void)removeIconWithPageURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)iconInfoForIconURLString:(id)a0 includingPrivateData:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
