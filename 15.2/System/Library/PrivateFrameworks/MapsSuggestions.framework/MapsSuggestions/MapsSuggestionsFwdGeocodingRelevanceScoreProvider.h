@class NSString;
@protocol MapsSuggestionsRelevanceScoreProvider, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    id<MapsSuggestionsRelevanceScoreProvider> _wrappedScoreProvider;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
