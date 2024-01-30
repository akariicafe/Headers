@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;
+ (BOOL)preferencesFileExists;
+ (id)preferencesFilePath;
+ (id)preferencesFileUrl;

- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)removeObjectsForKeys:(id)a0;
- (void)reload;
- (BOOL)saveCache;
- (id)init;
- (void).cxx_destruct;
- (void)populateCache;
- (id)deepCopy:(id)a0;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)a0;

@end
