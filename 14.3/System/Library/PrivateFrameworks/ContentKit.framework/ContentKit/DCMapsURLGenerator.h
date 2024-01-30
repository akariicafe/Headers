@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator

@property (readonly, nonatomic) NSMutableDictionary *queryDictionary;
@property (readonly, nonatomic) DCMapsLink *mapsLink;

+ (id)URLWithMapsLink:(id)a0;

- (id)host;
- (id)URL;
- (id)scheme;
- (id)mapType;
- (id)query;
- (id)path;
- (void).cxx_destruct;
- (id)directionsMode;
- (void)populateQueryDictionary;
- (id)initWithMapsLink:(id)a0;
- (void)setString:(id)a0 forQueryKey:(id)a1;

@end
