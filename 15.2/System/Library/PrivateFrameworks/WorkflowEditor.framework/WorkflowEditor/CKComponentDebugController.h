@interface CKComponentDebugController : NSObject

+ (void)setDebugMode:(BOOL)a0;
+ (BOOL)debugMode;
+ (void)registerReflowListener:(id)a0;
+ (void)reflowComponents;

@end
