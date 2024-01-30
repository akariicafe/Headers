@interface __NSCFLocale : NSLocale

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)objectForKey:(id)a0;
- (unsigned char)_nullLocale;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)retain;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)_prefs;
- (void)_setNullLocale;

@end
