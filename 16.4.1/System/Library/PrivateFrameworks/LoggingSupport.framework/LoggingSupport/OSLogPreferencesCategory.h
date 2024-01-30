@class NSString, OSLogPreferencesSubsystem;

@interface OSLogPreferencesCategory : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) OSLogPreferencesSubsystem *subsystem;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;
@property (nonatomic) BOOL signpostEnabled;
@property (nonatomic) BOOL signpostPersisted;
@property (nonatomic) BOOL signpostBacktracesEnabled;

- (void).cxx_destruct;
- (void)reset;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (id)initWithName:(id)a0 subsystem:(id)a1;

@end
