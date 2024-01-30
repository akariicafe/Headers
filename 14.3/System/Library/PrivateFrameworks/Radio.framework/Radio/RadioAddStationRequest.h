@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest : RadioSyncRequest {
    NSDictionary *_matchDictionary;
    long long _persistentID;
    NSMutableDictionary *_stationDictionary;
    NSString *_stationHashForSkipHistoryCopying;
}

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)startWithAddStationCompletionHandler:(id /* block */)a0;
- (id)initWithRadioTrackDictionary:(id)a0 useArtist:(BOOL)a1;
- (id)initWithStation:(id)a0;
- (id)matchDictionary;
- (id)changeList;
- (id)initWithStationDictionary:(id)a0;
- (id)initWithLibraryTrackDictionary:(id)a0 useArtist:(BOOL)a1;
- (id)initWithQueryTerm:(id)a0 queryID:(long long)a1;

@end
