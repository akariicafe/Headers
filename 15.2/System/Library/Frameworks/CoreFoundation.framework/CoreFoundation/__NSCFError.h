@interface __NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)code;
- (id)userInfo;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)domain;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
