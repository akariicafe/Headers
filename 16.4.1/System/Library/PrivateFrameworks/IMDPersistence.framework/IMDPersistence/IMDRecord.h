@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;

@end
