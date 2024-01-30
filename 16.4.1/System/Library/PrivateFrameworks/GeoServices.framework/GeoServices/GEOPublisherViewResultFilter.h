@class GEOPublisherViewResultFilterAddress, GEOPublisherViewResultFilterKeyword, GEOPDPublisherViewResultFilter, NSArray;

@interface GEOPublisherViewResultFilter : NSObject {
    GEOPDPublisherViewResultFilter *_resultFilter;
    NSArray *_places;
}

@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) GEOPublisherViewResultFilterAddress *addressFilter;
@property (readonly, nonatomic) GEOPublisherViewResultFilterKeyword *keywordFilter;

- (void).cxx_destruct;
- (id)initWithPublisherViewResultFilter:(id)a0 withPlaces:(id)a1;

@end
