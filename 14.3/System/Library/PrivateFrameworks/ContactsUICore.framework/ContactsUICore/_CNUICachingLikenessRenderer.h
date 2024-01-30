@class CNAvatarCacheChangeListener, NSString, _CNUILikenessRenderer, CNQueue, CNCache, NSObject;
@protocol CNSchedulerProvider, OS_dispatch_source;

@interface _CNUICachingLikenessRenderer : NSObject <CNAvatarCacheChangeListenerDelegate, CNUILikenessRendering> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _CNUILikenessRenderer *renderer;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) BOOL shouldRequireMainThread;
@property (retain, nonatomic) CNCache *imageCache;
@property (retain, nonatomic) CNQueue *evictionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (retain, nonatomic) id<CNSchedulerProvider> mainThreadSchedulerProvider;
@property (readonly, nonatomic) CNAvatarCacheChangeListener *changeHistoryListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)a0;
+ (id)_cacheKeyForContacts:(id)a0 scope:(id)a1;

- (void)invalidateCacheEntriesContainingIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initialRenderedLikenessesForContacts:(id)a0 scope:(id)a1 workScheduler:(id)a2;
- (void)dealloc;
- (void)refreshCacheKey:(id)a0;
- (id)renderedBasicMonogramForString:(id)a0 color:(id)a1 scope:(id)a2 prohibitedSources:(long long)a3;
- (id)initWithLikenessRenderer:(id)a0 schedulerProvider:(id)a1 capacity:(unsigned long long)a2 shouldRequireMainThread:(BOOL)a3;
- (id)renderedBasicMonogramFromString:(id)a0 scope:(id)a1;
- (void)updateContactsWithIdentifiers:(id)a0;
- (void)emptyCache:(id)a0;
- (id)resizeCacheEntry:(id)a0 withScope:(id)a1 workScheduler:(id)a2;
- (id)initWithLikenessRenderer:(id)a0 schedulerProvider:(id)a1 capacity:(unsigned long long)a2 shouldRequireMainThread:(BOOL)a3 contactStore:(id)a4;
- (id)loadingPlaceholderForContactCount:(unsigned long long)a0 scope:(id)a1;
- (id)startCacheEntryWithObservable:(id)a0 contacts:(id)a1 scope:(id)a2;
- (id)initWithLikenessRenderer:(id)a0 schedulerProvider:(id)a1;
- (id)renderedLikenessesForContacts:(id)a0 scope:(id)a1 workScheduler:(id)a2;

@end
