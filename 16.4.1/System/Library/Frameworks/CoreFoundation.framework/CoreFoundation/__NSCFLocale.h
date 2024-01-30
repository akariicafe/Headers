@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)retain;
- (id)_prefForKey:(id)a0;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (BOOL)_tryRetain;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;

@end
