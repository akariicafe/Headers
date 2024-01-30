@class NSString, NSMutableDictionary;

@interface BYPreferencesController : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *preferences;

+ (void)flushEverything;
+ (id)buddyPreferences;
+ (id)buddyPreferencesEphemeral;
+ (void)persistEverything;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)genericPreferencesEphemeral;
+ (id)buddyPreferencesInternal;

- (void)flush;
- (void)removeObjectForKey:(id)a0 onlyFromMemory:(BOOL)a1;
- (id)initWithDomain:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 persistImmediately:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 includeCache:(BOOL)a1;
- (void)persist;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)reset;

@end
