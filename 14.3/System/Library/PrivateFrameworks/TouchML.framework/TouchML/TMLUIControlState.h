@interface TMLUIControlState : NSObject

@property (nonatomic) unsigned long long state;

+ (BOOL)isControlStateClass:(id)a0;
+ (void)registerControlState:(id)a0 forClass:(Class)a1;
+ (void)verifyStateProperty:(id)a0 withClass:(Class)a1;

@end
