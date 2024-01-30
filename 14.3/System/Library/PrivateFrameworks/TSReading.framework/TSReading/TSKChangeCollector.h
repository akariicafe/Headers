@interface TSKChangeCollector : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)threadCollector;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)registerChange:(int)a0 details:(id)a1 forChangeSource:(id)a2;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;

@end
