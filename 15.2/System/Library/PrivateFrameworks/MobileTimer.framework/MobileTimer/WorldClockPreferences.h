@interface WorldClockPreferences : NSObject

- (id)lastModified;
- (void)setLastModified:(id)a0;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (void)setCities:(id)a0;
- (id)cities;
- (id)defaultsKeys;
- (BOOL)synchronize;
- (BOOL)defaultCitiesAdded;

@end
