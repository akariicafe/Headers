@interface OS_object : NSObject

- (id)retain;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (void)_xref_dispose;
- (id)init;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;

@end
