@interface TMLJSEnvironment : NSObject

+ (id)currentContext;
+ (void)setCurrentContext:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initializeJSContext:(id)a0;
+ (id)convertJsValue:(id)a0 toType:(unsigned long long)a1;
+ (id)sharedVM;
+ (void)runInContext:(id)a0 block:(id /* block */)a1;
+ (id)normalizeValue:(id)a0 toType:(unsigned long long)a1;
+ (id)convertTmlValue:(id)a0;
+ (void)applicationDidReceiveMemoryWarningNotification:(id)a0;
+ (void)forceGC;
+ (id)protoJSContext;
+ (id)defaultModules;
+ (id)validCurrentContext;
+ (void)requireModule:(id)a0 forJSContext:(id)a1;
+ (id)createJSContextWithRuntimeContext:(id)a0;
+ (void)addGCCallback:(id /* block */)a0;
+ (void)addToDefaultModules:(id)a0;

@end
