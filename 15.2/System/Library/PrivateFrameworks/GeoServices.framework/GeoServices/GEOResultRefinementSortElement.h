@class NSString, GEOPDResultRefinementMetadata;

@interface GEOResultRefinementSortElement : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata;

- (id)initWithResultRefinementSortElement:(id)a0;
- (id)convertToGEOPDResultRefinementSortElement;
- (id)initWithDisplayName:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;

@end
