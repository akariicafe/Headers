@class NSString, NSArray, NSMutableDictionary;
@protocol MapsSuggestionsMapsSyncConnectorDelegate;

@interface MapsSuggestionsFakeMapsSyncConnector : NSObject <MapsSuggestionsMapsSyncConnector> {
    BOOL _breakCallbackPromise;
    NSArray *_configuredHistoryResults;
    NSMutableDictionary *_configureReviewedPlacesPerMuid;
    unsigned long long _calledAllContentOfType;
    unsigned long long _calledMapsSyncReviewedPlaceFetchWithMuids;
}

@property (weak, nonatomic) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allContentOfType:(long long)a0 handler:(id /* block */)a1;
- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)a0;
- (id)newReviewedPlace;
- (void)configureBreakCallbackPromise;
- (void)configureHistoryResults:(id)a0;
- (void)configureReviewedPlace:(id)a0 forMuid:(unsigned long long)a1;
- (void)fireDidChangeForType:(long long)a0;
- (unsigned long long)calledAllContentOfType;
- (unsigned long long)calledMapsSyncReviewedPlaceFetchWithMuids;

@end
