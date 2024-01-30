@interface OS_object : NSObject

- (id)init;
- (void)_xref_dispose;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)retainWeakReference;

@end
