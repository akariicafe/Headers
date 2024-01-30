@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)domain;
- (id)retain;
- (long long)code;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)userInfo;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;

@end
