@class GEOPlaceCollectionItem, MKMapItem;

@interface MKPlaceCollectionMapItem : NSObject

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) GEOPlaceCollectionItem *placeCollectionItem;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMapItem:(id)a0 placeCollectionItem:(id)a1;

@end
