@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;
+ (id)preferencesFileUrl;
+ (id)preferencesFilePath;
+ (BOOL)preferencesFileExists;

- (void)reload;
- (BOOL)removeObjectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (BOOL)removeObjectsForKeys:(id)a0;
- (void)populateCache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)a0;
- (id)deepCopy:(id)a0;
- (BOOL)saveCache;

@end
