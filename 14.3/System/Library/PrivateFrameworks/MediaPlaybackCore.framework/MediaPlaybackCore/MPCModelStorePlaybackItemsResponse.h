@class NSString, NSDictionary, MPStoreLibraryPersonalizationResponse, NSDate, NSObject;
@protocol OS_dispatch_source;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPModelResponseDetailedKeepLocalStatusRequesting, MPCModelPlaybackResponse> {
    NSObject<OS_dispatch_source> *_invalidationTimer;
}

@property (readonly, nonatomic, getter=isInvalidForPersonalization) BOOL invalidForPersonalization;
@property (copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property (readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (copy, nonatomic) NSDate *invalidationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)a0 responseHandler:(id /* block */)a1;
- (void)_invalidate;
- (void)_allowsExplicitContentDidChangeNotification:(id)a0;
- (void)_activeUserDidChangeNotification:(id)a0;
- (void)_personalizationResponseDidInvalidateNotification:(id)a0;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)a0;
- (id)initWithRequest:(id)a0 personalizationResponse:(id)a1;

@end
