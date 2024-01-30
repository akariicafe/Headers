@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator

@property (readonly, nonatomic) NSMutableDictionary *queryDictionary;
@property (readonly, nonatomic) DCMapsLink *mapsLink;

+ (id)URLWithMapsLink:(id)a0;

- (id)host;
- (id)scheme;
- (id)query;
- (void).cxx_destruct;
- (id)URL;
- (id)mapType;
- (id)path;
- (id)directionsMode;
- (void)populateQueryDictionary;
- (id)initWithMapsLink:(id)a0;
- (void)setString:(id)a0 forQueryKey:(id)a1;

@end
