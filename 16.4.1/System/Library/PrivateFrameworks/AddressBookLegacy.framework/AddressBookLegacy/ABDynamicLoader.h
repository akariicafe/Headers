@interface ABDynamicLoader : NSObject

+ (BOOL)loadFrameworkAtPath:(id)a0 andStoreHandle:(void **)a1 bundle:(id *)a2;
+ (BOOL)loadFrameworkAtPath:(id)a0 andStoreHandle:(void **)a1 bundle:(id *)a2 logging:(BOOL)a3;

@end
