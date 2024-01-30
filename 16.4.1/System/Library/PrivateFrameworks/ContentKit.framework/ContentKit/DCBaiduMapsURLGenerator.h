@interface DCBaiduMapsURLGenerator : DCMapsURLGenerator

- (id)path;
- (id)host;
- (id)scheme;
- (id)directionsMode;
- (void)populateQueryDictionary;

@end
