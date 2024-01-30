@interface TSKChangeCollector : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)threadCollector;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)registerChange:(int)a0 details:(id)a1 forChangeSource:(id)a2;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;

@end
