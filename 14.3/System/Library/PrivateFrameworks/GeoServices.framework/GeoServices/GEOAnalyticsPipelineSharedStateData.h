@class geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {
    geo_isolater *_placeIso;
    geo_isolater *_mapViewIso;
    NSObject<OS_dispatch_queue> *_configQueue;
}

+ (id)sharedData;

- (void)performPlaceCardStateUpdate:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)populateWithPlace:(id)a0 timestamp:(double)a1 resultIndex:(int)a2;
- (BOOL)hasMapRestoreData;
- (BOOL)hasPlaceCard_PlaceActionDetails;
- (void)clearSuggestionsData;
- (int)layoutStyleAsGEOLayoutStyle;
- (void)performMapViewStateUpdate:(id /* block */)a0;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
- (int)transportModeAsGEOTransportMode;
- (int)navVoiceVolumeAsGEONavVoiceVolume;
- (void)setUserHomecountry:(id)a0;
- (BOOL)hasPlaceCardStateData;
- (void)setMetroRegion:(id)a0;
- (void)_populateWithGEOTransitDepartureSequenceUsage:(id)a0;
- (void)_performSyncStateUpdateWithIsolator:(id)a0 updateBlock:(id /* block */)a1;
- (void)setUserHomemetro:(id)a0;
- (void)populateWithChildPlace:(id)a0 timestamp:(double)a1 resultIndex:(int)a2;
- (BOOL)hasMapsServerData;
- (int)locationPrecisionTypeAsGEOSettingsLocationType;
- (int)layoutInfoAsGEOLayoutInfo;
- (void)populateWithPlaceActionDetails:(id)a0;
- (void)_populateWithGEOTransitPlaceCard:(id)a0;
- (BOOL)hasMapLaunchData;
- (BOOL)hasSuggestionsData;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
- (void)clearPlaceCardStateData;

@end
