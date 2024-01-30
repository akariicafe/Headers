@interface _UIObjectPerScreen : NSObject

+ (void)removeObject:(id)a0;
+ (void)removeObjectsOfClass:(Class)a0;
+ (void)screenDisconnected:(id)a0;
+ (id)objectOfClass:(Class)a0 forScreen:(id)a1 withOptions:(id)a2 createIfNecessary:(BOOL)a3;

@end
