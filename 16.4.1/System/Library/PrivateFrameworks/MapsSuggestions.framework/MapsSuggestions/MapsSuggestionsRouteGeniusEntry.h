@class GEOComposedRoute, MapsSuggestionsEntry;

@interface MapsSuggestionsRouteGeniusEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MapsSuggestionsEntry *entry;
@property (retain, nonatomic) GEOComposedRoute *route;

+ (id)entryWithData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (double)etaInSeconds;
- (id)initWithEntry:(id)a0 route:(id)a1;

@end
