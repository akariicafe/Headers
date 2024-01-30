@interface SXClassFactory : NSObject

+ (void)initialize;
+ (void)stopTesting;
+ (void)startTesting;
+ (id /* block */)valueClassBlockForBaseClass:(Class)a0;
+ (void)registerClass:(Class)a0 type:(id)a1 baseClass:(Class)a2;
+ (Class)classForBaseClass:(Class)a0 type:(id)a1;

@end
