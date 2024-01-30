@interface CKComponentDebugController : NSObject

+ (BOOL)debugMode;
+ (void)setDebugMode:(BOOL)a0;
+ (void)registerReflowListener:(id)a0;
+ (void)reflowComponents;

@end
