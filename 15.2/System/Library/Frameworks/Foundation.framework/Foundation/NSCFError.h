@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)code;
- (BOOL)allowsWeakReference;
- (id)userInfo;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)domain;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
