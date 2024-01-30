@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void).cxx_destruct;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)dealloc;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)stop;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (void)addOrUpdateSuggestionEntriesData:(id)a0 sourceNameData:(id)a1 handler:(id /* block */)a2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (void)Debug_updateGraph;
- (void)start;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;

@end
