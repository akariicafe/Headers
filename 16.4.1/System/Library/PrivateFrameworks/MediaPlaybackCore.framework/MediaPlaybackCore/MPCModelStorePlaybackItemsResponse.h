@class NSObject, NSString, NSDictionary, MPStoreLibraryPersonalizationResponse, MPCModelStorePlaybackItemsRequestAccumulation, NSDate, ICURLAggregatedPerformanceMetrics;
@protocol OS_dispatch_source;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPCModelPlaybackResponse> {
    NSObject<OS_dispatch_source> *_invalidationTimer;
}

@property (readonly, nonatomic, getter=isInvalidForPersonalization) BOOL invalidForPersonalization;
@property (copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulation *accumulation;
@property (readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (copy, nonatomic) NSDate *invalidationDate;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_allowsExplicitContentDidChangeNotification:(id)a0;
- (void)_activeUserDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (void)_personalizationResponseDidInvalidateNotification:(id)a0;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)a0;
- (id)initWithRequest:(id)a0 accumulation:(id)a1 performanceMetrics:(id)a2;
- (id)initWithRequest:(id)a0 personalizationResponse:(id)a1 results:(id)a2 performanceMetrics:(id)a3;

@end
