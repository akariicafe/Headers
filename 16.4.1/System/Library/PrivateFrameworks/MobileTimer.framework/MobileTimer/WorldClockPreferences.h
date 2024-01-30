@interface WorldClockPreferences : NSObject

- (BOOL)synchronize;
- (void)cityDataUpdated;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (void)clearOutCityUpdatePref;
- (void)setLastModified:(id)a0;
- (id)lastModified;
- (id)cities;
- (BOOL)cityDataNeedsUpdate;
- (void)setCities:(id)a0;
- (BOOL)defaultCitiesAdded;
- (id)defaultsKeys;

@end
