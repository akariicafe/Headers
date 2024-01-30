@class MPSectionedCollection, MPStoreLibraryPersonalizationResponse;

@interface MPCModelRadioPersonalizationResponse : MPModelResponse {
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
}

@property (copy, nonatomic) MPSectionedCollection *radioStationTracks;
@property (readonly, copy, nonatomic) MPSectionedCollection *results;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRequest:(id)a0 personalizationResponse:(id)a1;

@end
