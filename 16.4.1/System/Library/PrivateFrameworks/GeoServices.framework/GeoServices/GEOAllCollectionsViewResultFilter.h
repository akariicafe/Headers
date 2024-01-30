@class NSArray, GEOPDAllCollectionsViewResultFilter, GEOAllCollectionsViewResultFilterTypeKeyword, GEOAllCollectionsViewResultFilterTypeAddress;

@interface GEOAllCollectionsViewResultFilter : NSObject {
    GEOPDAllCollectionsViewResultFilter *_resultFilter;
    NSArray *_places;
}

@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) GEOAllCollectionsViewResultFilterTypeAddress *addressFilter;
@property (readonly, nonatomic) GEOAllCollectionsViewResultFilterTypeKeyword *keywordFilter;

- (void).cxx_destruct;
- (id)initWithAllCollectionsViewResultFilter:(id)a0 withPlaces:(id)a1;

@end
