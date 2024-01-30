@interface SXClassFactory : NSObject

+ (void)initialize;
+ (void)registerClass:(Class)a0 type:(id)a1 baseClass:(Class)a2;
+ (void)stopTesting;
+ (Class)classForBaseClass:(Class)a0 type:(id)a1;
+ (void)startTesting;
+ (id /* block */)valueClassBlockForBaseClass:(Class)a0;

@end
