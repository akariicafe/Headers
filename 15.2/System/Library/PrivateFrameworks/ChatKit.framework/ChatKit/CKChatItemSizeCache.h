@class NSMutableDictionary, NSString, NSData, IMDoubleLinkedList, NSObject, IMScheduledUpdater;
@protocol OS_dispatch_queue;

@interface CKChatItemSizeCache : NSObject <IMSystemMonitorListener>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *chatItemGUIDToCacheKeyMap;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDiskQueue;
@property (retain, nonatomic) IMScheduledUpdater *evictionUpdater;
@property (retain, nonatomic) NSString *preferredLocalization;
@property (nonatomic) BOOL test_throwExceptionDuringInflate;
@property (retain, nonatomic) NSData *test_cacheData;

+ (id)sharedInstance;
+ (id)test_cachePath;

- (void)systemApplicationDidSuspend;
- (void)setCachedSizeForChatItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 fittingSize:(struct CGSize { double x0; double x1; })a3;
- (void)invalidateCachedSizeForChatItem:(id)a0;
- (void)applicationWillResignActive;
- (BOOL)_boldTextEnabled;
- (id)_systemVersion;
- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (void)_updateKeyMap:(id)a0 forKey:(id)a1 sizeCacheKey:(id)a2;
- (void)_evictIfNeeded;
- (void)_inflateCache;
- (void)_invalidateCachedSizeForChatItemGUID:(id)a0;
- (void)_invalidateSizeCacheMetricsForKey:(id)a0;
- (void)_persistCache;
- (id)cacheKeyForChatItem:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)_generateChatItemGuidToCacheKeyMapWithCache:(id)a0;
- (id)initForTestAndThrowException:(BOOL)a0 cacheFileData:(id)a1;
- (id)_fontSizeCategory;
- (BOOL)cachedSizeForChatItem:(id)a0 size:(out struct CGSize { double x0; double x1; } *)a1 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 fittingSize:(struct CGSize { double x0; double x1; })a3;
- (void)invalidateCachedSizeForGUIDPrefix:(id)a0;

@end
