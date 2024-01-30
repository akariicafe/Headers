@class NSString, MapsSuggestionsShortcutManager, MapsSuggestionsCanKicker, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource> {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsShortcutManager *_shortcutManager;
    MapsSuggestionsCanKicker *_updateForcer;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)meCardReader:(id)a0 didUpdateMeCard:(id)a1;
- (void)_renameDuplicateMeCardTypes:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithShortcutManager:(id)a0 delegate:(id)a1 name:(id)a2;
- (void)stop;

@end
