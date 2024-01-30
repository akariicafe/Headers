@class NSRecursiveLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FavoriteManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *favoriteDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *serialQueueGroup;
@property (retain, nonatomic) NSRecursiveLock *dictLock;
@property (nonatomic, getter=isMigrating) BOOL migrating;

+ (id)sharedFavoriteManager;
+ (id)trimRanges:(id)a0 toMovie:(id)a1;
+ (id)subtractRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)favoriteRanges:(id)a0 containRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)collapseRanges:(id)a0;

- (void)migrate;
- (void).cxx_destruct;
- (id)_init;
- (id)favoriteRangesForMovie:(id)a0;
- (void)loadFavoriteDictionary;
- (id)propertyListFileURL;
- (void)_setFavoriteInfo:(id)a0 forURL:(id)a1;
- (void)_removeFavoriteInfoForURL:(id)a0;
- (BOOL)FAILSAFE_isInvalidRangesArray:(id)a0;
- (void)saveFavoriteDictionary;
- (id)_favoriteInfoForURL:(id)a0;
- (void)_setFavoriteRanges:(id)a0 forURL:(id)a1;
- (void)removeFavoriteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forMovie:(id)a1;
- (void)addFavoriteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forMovie:(id)a1 shouldCollapse:(BOOL)a2;
- (void)waitForOutstandingWritingToComplete;
- (void)removeAllFavoritesForMovie:(id)a0;
- (void)unfavoriteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forMovie:(id)a1;
- (void)addFavoriteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forMovie:(id)a1;
- (BOOL)favoriteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 existsForMovie:(id)a1;
- (BOOL)favoritesExistInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forMovie:(id)a1;
- (id)_favoriteRangesForURL:(id)a0;
- (id)combinedRCRangeArrayFromNSRangeArray:(id)a0;

@end
