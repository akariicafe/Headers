@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (void)_suspend;
- (void)_setContext:(void *)a0;
- (void)_resume;
- (oneway void)release;
- (void)_setTargetQueue:(id)a0;
- (void)_activate;
- (void *)_getContext;
- (void)_setFinalizer:(void /* function */ *)a0;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
