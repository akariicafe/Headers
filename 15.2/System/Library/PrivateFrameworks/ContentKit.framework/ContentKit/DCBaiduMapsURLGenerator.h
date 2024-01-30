@interface DCBaiduMapsURLGenerator : DCMapsURLGenerator

- (id)host;
- (id)scheme;
- (id)path;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
