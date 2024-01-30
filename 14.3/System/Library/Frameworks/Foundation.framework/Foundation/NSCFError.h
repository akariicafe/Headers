@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)code;
- (id)userInfo;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)domain;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)retainWeakReference;
- (Class)classForCoder;

@end
