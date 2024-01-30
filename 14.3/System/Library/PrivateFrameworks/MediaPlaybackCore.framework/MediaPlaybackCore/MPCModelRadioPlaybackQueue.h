@class ICRadioPlaybackHistoryStore, ICStoreRequestContext, _MPCModelRadioPlaybackQueueStationTracksCollection, ICRadioPlaybackHistory, MPModelRadioStation, MPCModelGenericAVItemUserIdentityPropertySet, MPSectionedCollection;

@interface MPCModelRadioPlaybackQueue : NSObject {
    ICRadioPlaybackHistoryStore *_playbackHistoryStore;
    ICStoreRequestContext *_storeRequestContext;
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;
}

@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) long long numberOfItems;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (readonly, copy, nonatomic) ICRadioPlaybackHistory *playbackHistory;
@property (readonly, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, nonatomic) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (id)initWithPlaybackContext:(id)a0;
- (id)AVItemAtIndex:(long long)a0;
- (BOOL)isExplicitItemAtIndex:(long long)a0;
- (long long)removeExplicitItems;
- (void)savePlaybackHistoryWithUpdates:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)trackForItemAtIndex:(long long)a0;
- (void)updateWithPersonalizedResponse:(id)a0;
- (void)savePlaybackHistoryWithUpdates:(id /* block */)a0;
- (id)tracksByApplyingTracksResponse:(id)a0 currentIndex:(long long)a1;

@end
