@interface __NSCFLocale : NSLocale

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)retainCount;
- (id)retain;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)objectForKey:(id)a0;
- (id)_prefs;
- (unsigned long long)hash;
- (BOOL)_tryRetain;
- (id)initWithLocaleIdentifier:(id)a0;
- (oneway void)release;
- (id)displayNameForKey:(id)a0 value:(id)a1;

@end
