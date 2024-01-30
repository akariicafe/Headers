@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;
+ (id)preferencesFileUrl;
+ (id)preferencesFilePath;
+ (BOOL)preferencesFileExists;

- (id)objectForKey:(id)a0;
- (void)reload;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeObjectsForKeys:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)removeObjectForKey:(id)a0;
- (void)populateCache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)a0;
- (BOOL)saveCache;

@end
