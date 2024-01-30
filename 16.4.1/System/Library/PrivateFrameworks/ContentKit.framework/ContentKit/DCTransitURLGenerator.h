@interface DCTransitURLGenerator : DCMapsURLGenerator

- (id)path;
- (id)host;
- (id)scheme;
- (void)populateQueryDictionary;

@end
