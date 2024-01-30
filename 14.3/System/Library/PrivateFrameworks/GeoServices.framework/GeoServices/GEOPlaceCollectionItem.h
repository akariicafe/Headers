@class NSString, NSArray, GEOMapItemIdentifier, NSURL, GEOPDPlaceCollectionItem;

@interface GEOPlaceCollectionItem : NSObject {
    GEOPDPlaceCollectionItem *_placeCollectionItem;
}

@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) GEOMapItemIdentifier *itemIdentifier;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) BOOL supportsPhotoFallback;
@property (readonly, nonatomic) NSURL *reviewUrl;

- (id)initWithPlaceCollectionItem:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
