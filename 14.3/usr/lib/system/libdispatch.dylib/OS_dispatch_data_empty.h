@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_suspend;
- (void *)_getContext;
- (id)autorelease;
- (oneway void)release;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_setTargetQueue:(id)a0;
- (unsigned long long)retainCount;
- (void)_activate;
- (id)retain;
- (void)_resume;
- (void)_setContext:(void *)a0;

@end
