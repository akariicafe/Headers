@protocol GEOVenueIdentifier;

@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) id<GEOVenueIdentifier> identifier;

- (id)initWithIdentifier:(id)a0;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
