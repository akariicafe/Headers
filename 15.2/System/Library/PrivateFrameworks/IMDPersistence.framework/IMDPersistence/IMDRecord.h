@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (oneway void)release;

@end
