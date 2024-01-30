@class GEOCollectionPublisherAttribution, NSString, GEOPDPublisher, GEOMapItemIdentifier, NSURL;

@interface GEOPublisher : NSObject {
    GEOPDPublisher *_publisher;
}

@property (readonly, nonatomic) long long totalCollectionCount;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSString *publisherDescription;
@property (readonly, nonatomic) NSURL *publisherURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) GEOCollectionPublisherAttribution *publisherAttribution;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPublisher:(id)a0 usingAttribution:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
