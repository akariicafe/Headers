@class NSString, CSSearchableIndex, PLPhotoLibrary;

@interface PLSpotlightResetOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) BOOL shouldForceSpotlightReindexForCurrentBundleIdentifier;

- (void)_deleteSearchableItems:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 spotlightSearchableIndex:(id)a1 domainIdentifier:(id)a2 shouldForceSpotlightReindexForCurrentBundleIdentifier:(BOOL)a3;

@end
