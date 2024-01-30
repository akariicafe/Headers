@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_suspend;
- (void)_resume;
- (unsigned long long)retainCount;
- (id)retain;
- (void *)_getContext;
- (id)autorelease;
- (void)_activate;
- (void)_setContext:(void *)a0;
- (void)_setFinalizer:(void /* function */ *)a0;
- (oneway void)release;
- (void)_setTargetQueue:(id)a0;

@end
