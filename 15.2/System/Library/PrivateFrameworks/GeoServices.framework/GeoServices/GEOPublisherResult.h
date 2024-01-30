@class GEOPublisher, GEOPDPublisherResult, GEOPDComponent;

@interface GEOPublisherResult : NSObject {
    GEOPDPublisherResult *_publisherResult;
    GEOPDComponent *_publisherComponent;
    GEOPublisher *_publisher;
}

@property (readonly, nonatomic) GEOPublisher *publisher;

+ (id)publisherResultsFromResponse:(id)a0;

- (id)initWithPublisherResult:(id)a0;
- (void).cxx_destruct;

@end
