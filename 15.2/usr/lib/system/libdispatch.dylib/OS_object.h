@interface OS_object : NSObject

- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (id)init;
- (void)_xref_dispose;
- (oneway void)release;

@end
