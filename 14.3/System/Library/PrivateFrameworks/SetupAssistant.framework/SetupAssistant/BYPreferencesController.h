@class NSString, NSMutableDictionary;

@interface BYPreferencesController : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *preferences;

+ (id)buddyPreferencesEphemeral;
+ (void)flushEverything;
+ (void)persistEverything;
+ (id)buddyPreferencesInternal;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)buddyPreferences;

- (id)objectForKey:(id)a0;
- (id)initWithDomain:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 includeCache:(BOOL)a1;
- (void)reset;
- (void)setObject:(id)a0 forKey:(id)a1 persistImmediately:(BOOL)a2;
- (void)persist;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)flush;
- (void)removeObjectForKey:(id)a0 onlyFromMemory:(BOOL)a1;
- (void)removeObjectForKey:(id)a0;

@end
