@class GEOPlaceCollectionItem, MKMapItem, GEOQuickLink;

@interface MKPlaceCollectionMapItem : NSObject

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) GEOPlaceCollectionItem *placeCollectionItem;
@property (readonly, nonatomic) GEOQuickLink *appClip;

- (id)description;
- (id)initWithMapItem:(id)a0 placeCollectionItem:(id)a1;
- (void).cxx_destruct;

@end
