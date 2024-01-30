@interface TMLJSEnvironment : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentContext;
+ (void)forceGC;
+ (void)initializeJSContext:(id)a0;
+ (id)convertJsValue:(id)a0 toType:(unsigned long long)a1;
+ (id)sharedVM;
+ (void)runInContext:(id)a0 block:(id /* block */)a1;
+ (id)normalizeValue:(id)a0 toType:(unsigned long long)a1;
+ (id)convertTmlValue:(id)a0;
+ (void)applicationDidReceiveMemoryWarningNotification:(id)a0;
+ (id)protoJSContext;
+ (id)defaultModules;
+ (id)validCurrentContext;
+ (void)requireModule:(id)a0 forJSContext:(id)a1;
+ (id)createJSContextWithRuntimeContext:(id)a0;
+ (void)addGCCallback:(id /* block */)a0;
+ (void)addToDefaultModules:(id)a0;

@end
