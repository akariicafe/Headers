@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BYPreferencesController : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)genericPreferencesEphemeral;
+ (id)buddyPreferencesInternal;
+ (id)buddyPreferencesEphemeral;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)randomPreferences;
+ (void)flushEverything;
+ (id)buddyPreferences;
+ (void)persistEverything;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)persist;
- (id)initWithDomain:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 persistImmediately:(BOOL)a2;
- (void)flush;
- (void)removeObjectForKey:(id)a0 onlyFromMemory:(BOOL)a1;
- (id)objectForKey:(id)a0 includeCache:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
