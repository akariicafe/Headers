@interface DCGoogleMapsURLGenerator : DCMapsURLGenerator

- (id)host;
- (id)scheme;
- (id)path;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
