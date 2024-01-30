@interface WorldClockPreferences : NSObject

- (void)setLastModified:(id)a0;
- (id)lastModified;
- (id)defaultsKeys;
- (id)cities;
- (void)setCities:(id)a0;
- (BOOL)synchronize;
- (BOOL)defaultCitiesAdded;
- (void)setDefaultCitiesAdded:(BOOL)a0;

@end
