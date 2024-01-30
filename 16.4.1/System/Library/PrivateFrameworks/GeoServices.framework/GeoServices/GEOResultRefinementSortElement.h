@class NSString, GEOPDResultRefinementMetadata;

@interface GEOResultRefinementSortElement : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementSortElement;
- (id)initWithDisplayName:(id)a0 metadata:(id)a1;
- (id)initWithResultRefinementSortElement:(id)a0;

@end
