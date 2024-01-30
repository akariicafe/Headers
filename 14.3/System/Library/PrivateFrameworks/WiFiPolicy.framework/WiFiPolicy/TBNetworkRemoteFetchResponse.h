@class GEOWiFiQualityNetworkSearchResult;

@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse

@property (retain, nonatomic) GEOWiFiQualityNetworkSearchResult *networkSearchResult;

+ (id)responseWithNetworkSearchResults:(id)a0;

- (void).cxx_destruct;
- (id)initWithNetworkSearchResults:(id)a0;

@end
