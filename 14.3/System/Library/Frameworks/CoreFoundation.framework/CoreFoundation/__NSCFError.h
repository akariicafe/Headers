@interface __NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)code;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)domain;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;

@end
