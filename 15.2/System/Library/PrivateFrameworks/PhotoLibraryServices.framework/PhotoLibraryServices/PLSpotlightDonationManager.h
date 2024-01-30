@class NSString, CSSearchableIndex, PLPhotoLibrary, NSOperationQueue;

@interface PLSpotlightDonationManager : NSObject <PLSpotlightDonationManagerSignpostDelegate>

@property (readonly, nonatomic) CSSearchableIndex *spotlightIndex;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSString *searchIndexName;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUniversalSearchEnabled;

- (void)deleteAllSearchableItems:(BOOL)a0;
- (id)initWithPhotoLibrary:(id)a0 searchIndexName:(id)a1 bundleIdentifier:(id)a2 domainIdentifier:(id)a3;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0;
- (void)setSpotlightOperationQueueSuspended:(BOOL)a0;
- (void).cxx_destruct;
- (id)spotlightDonationManagerLog;
- (void)_signPostIntervalForOperationType:(unsigned long long)a0 searchableItemCount:(unsigned long long)a1 isBegin:(BOOL)a2;
- (void)donateSearchableItems:(id)a0;
- (void)beginSignpostIntervalForOperationType:(unsigned long long)a0 searchableItemCount:(unsigned long long)a1;
- (void)endSignpostIntervalForOperationType:(unsigned long long)a0 searchableItemCount:(unsigned long long)a1;

@end
