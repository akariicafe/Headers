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

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_fontSizeCategory;
- (id)cacheKeyForChatItem:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)initForTestAndThrowException:(BOOL)a0 cacheFileData:(id)a1;
- (void)_invalidateSizeCacheMetricsForKey:(id)a0;
- (void)_persistCache;
- (id)_generateChatItemGuidToCacheKeyMapWithCache:(id)a0;
- (void)_invalidateCachedSizeForChatItemGUID:(id)a0;
- (void)_updateKeyMap:(id)a0 forKey:(id)a1 sizeCacheKey:(id)a2;
- (void)_inflateCache;
- (void)_evictIfNeeded;
- (BOOL)cachedSizeForChatItem:(id)a0 size:(out struct CGSize { double x0; double x1; } *)a1 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 fittingSize:(struct CGSize { double x0; double x1; })a3;
- (void)invalidateCachedSizeForGUIDPrefix:(id)a0;
- (void)setCachedSizeForChatItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 fittingSize:(struct CGSize { double x0; double x1; })a3;
- (void)invalidateCachedSizeForChatItem:(id)a0;
- (id)_systemVersion;
- (void)systemApplicationDidSuspend;
- (BOOL)_boldTextEnabled;
- (void)applicationWillResignActive;

@end
