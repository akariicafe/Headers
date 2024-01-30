@interface UICTFont : UIFont

- (id)retain;
- (unsigned long long)_cfTypeID;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;

@end
