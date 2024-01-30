@interface UICachedDeviceRGBColor : UIDeviceRGBColor

- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (oneway void)release;

@end
