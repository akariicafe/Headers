@class NSString, _TtC8MapsSync34MapsSyncCollectionTransitItemQuery, _TtC8MapsSync25MapsSyncFavoriteItemQuery, _TtC8MapsSync24MapsSyncHistoryItemQuery;
@protocol MapsSuggestionsMapsSyncConnectorDelegate;

@interface MapsSuggestionsRealMapsSyncConnector : NSObject <MapsSync.MapsSyncDataQueryDelegate, MapsSuggestionsMapsSyncConnector> {
    id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;
    _TtC8MapsSync24MapsSyncHistoryItemQuery *_historyQuery;
    _TtC8MapsSync34MapsSyncCollectionTransitItemQuery *_transitItemQuery;
    _TtC8MapsSync25MapsSyncFavoriteItemQuery *_favoriteItemQuery;
}

@property (weak, nonatomic) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allContentOfType:(long long)a0 handler:(id /* block */)a1;
- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)a0;
- (id)init;
- (id)newReviewedPlace;
- (void).cxx_destruct;
- (void)queryContentsDidChangeWithQuery:(id)a0;

@end
