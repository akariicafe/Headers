@class geo_isolater, NSString, _TtC8MapsSync25MapsSyncFavoriteItemQuery, NSArray, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsMapsSyncShortcutStorage : NSObject <MapsSync.MapsSyncDataQueryDelegate, MapsSync.MapsSyncDataQueryMergeDelegate, MapsSuggestionsShortcutStorage> {
    id /* block */ _changeHandler;
    NSArray *_queryContents;
    NSLock *_lock;
    BOOL _willNotify;
    BOOL _editing;
    geo_isolater *_queryIsolator;
}

@property (readonly, nonatomic) _TtC8MapsSync25MapsSyncFavoriteItemQuery *query;
@property (nonatomic) BOOL hasAttemptedLoadingContents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL willNotify;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setChangeHandler:(id /* block */)a0;
- (BOOL)moveShortcut:(id)a0 beforeShortcut:(id)a1 handler:(id /* block */)a2;
- (BOOL)removeShortcuts:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)moveShortcut:(id)a0 afterShortcut:(id)a1 handler:(id /* block */)a2;
- (BOOL)moveShortcutToFront:(id)a0 handler:(id /* block */)a1;
- (BOOL)addOrUpdateShortcuts:(id)a0 handler:(id /* block */)a1;
- (BOOL)moveShortcut:(id)a0 toIndex:(long long)a1 handler:(id /* block */)a2;
- (void)queryContentsDidChangeWithQuery:(id)a0;
- (BOOL)loadAllShortcutsWithHandler:(id /* block */)a0;
- (BOOL)moveShortcutToBack:(id)a0 handler:(id /* block */)a1;
- (id)mergeDuplicateObjectsWithQuery:(id)a0 duplicates:(id)a1;

@end
