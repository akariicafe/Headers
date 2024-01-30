@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)domain;
- (id)retain;
- (long long)code;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (id)userInfo;
- (unsigned long long)retainCount;

@end
