@interface TSKChangeCollector : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)threadCollector;

- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;
- (void)registerChange:(int)a0 details:(id)a1 forChangeSource:(id)a2;

@end
