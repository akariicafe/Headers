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

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void)fail;
- (void)complete;
- (void)start;
- (id)geocoder;
- (void).cxx_destruct;
- (void)cancel;
- (void)continueWithLookAroundSnapshotWithOptions:(id)a0;
- (void)completeWithCollection;
- (void)completeWithCuratedCollection;
- (void)completeWithPublisher;
- (void)completeWithDirections;
- (void)continueWithSnapshotOfMapItems:(id)a0 inRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;
- (void)continueWithSnapshotOfMapRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)resolveMapRegionWithCompletionHandler:(id /* block */)a0;
- (void)completeWithSearchQuery:(id)a0;
- (void)completeWithPlacemark:(id)a0;
- (void)completeWithMapItem:(id)a0;

@end
