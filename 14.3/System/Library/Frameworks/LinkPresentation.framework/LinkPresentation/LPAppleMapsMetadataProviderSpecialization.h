@class LPMapMetadata, LPMapCollectionMetadata, LPMapCollectionPublisherMetadata, MKPlaceCuratedCollectionRefiner, CLGeocoder, _MKURLParser, MKPlacePublisherRefiner;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    CLGeocoder *_geocoder;
    _MKURLParser *_parser;
    LPMapMetadata *_mapMetadata;
    LPMapCollectionMetadata *_collectionMetadata;
    LPMapCollectionPublisherMetadata *_publisherMetadata;
    MKPlaceCuratedCollectionRefiner *_curatedCollectionRefiner;
    MKPlacePublisherRefiner *_publisherRefiner;
}

+ (id)specializedMetadataProviderForURLWithContext:(id)a0;
+ (unsigned long long)specialization;

- (void)cancel;
- (void)fail;
- (void).cxx_destruct;
- (void)continueWithBaseSnapshotOptions:(id)a0 mapItems:(id)a1;
- (void)completeWithCollection;
- (void)completeWithCuratedCollection;
- (void)completeWithPublisher;
- (void)completeWithDirections;
- (void)resolveMapRegionWithCompletionHandler:(id /* block */)a0;
- (void)completeWithSearchQuery:(id)a0;
- (void)completeWithMapItem:(id)a0;
- (void)completeWithPlacemark:(id)a0;
- (void)complete;
- (id)geocoder;
- (void)start;

@end
