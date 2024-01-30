@class NSString, _TtC8MapsSync24MapsSyncHistoryItemQuery;
@protocol MapsSuggestionsMapsSyncConnectorDelegate;

@interface MapsSuggestionsRealMapsSyncConnector : NSObject <MapsSync.MapsSyncDataQueryDelegate, MapsSuggestionsMapsSyncConnector> {
    id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;
    _TtC8MapsSync24MapsSyncHistoryItemQuery *_historyQuery;
}

@property (weak, nonatomic) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allContentOfType:(long long)a0 handler:(id /* block */)a1;
- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)a0;
- (id)newReviewedPlace;
- (void)queryContentsDidChangeWithQuery:(id)a0;

@end
