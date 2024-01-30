@class NSDate, NSString, NSArray, GEOMapItemIdentifier, NSURL, GEOPDPlaceCollection, GEOCollectionPublisherAttribution, GEOPublisher;
@protocol GEOMapItemPhoto;

@interface GEOPlaceCollection : NSObject {
    GEOPDPlaceCollection *_collection;
}

@property (readonly, nonatomic) NSString *collectionTitle;
@property (readonly, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) GEOMapItemIdentifier *collectionIdentifier;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) NSArray *itemIds;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) id<GEOMapItemPhoto> authorPhoto;
@property (readonly, nonatomic) NSURL *collectionURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) GEOPublisher *publisher;
@property (readonly, nonatomic) GEOCollectionPublisherAttribution *publisherAttribution;
@property (readonly, nonatomic) NSString *publisherAttributionIdentifierString;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCollection:(id)a0 usingAttribution:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
