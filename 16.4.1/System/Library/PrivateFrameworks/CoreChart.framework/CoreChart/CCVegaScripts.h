@interface CCVegaScripts : NSObject

+ (void)evaluateBootstrapScriptsInContext:(id)a0;
+ (void)evaluateScriptWithName:(id)a0 source:(id)a1 inContext:(id)a2;
+ (void)evaluateVegaLiteScriptInContext:(id)a0;
+ (id)loadScriptWithName:(id)a0 source:(id)a1 inVirtualMachine:(id)a2;
+ (id)stringForScriptData:(char *)a0 length:(unsigned long long)a1;
+ (id)vegaJS;
+ (id)vegaliteJS;

@end
