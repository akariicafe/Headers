@interface TVElementFactory : NSObject

+ (void)initialize;
+ (void)registerIKClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2 dependent:(BOOL)a3;
+ (void)registerClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2 dependent:(BOOL)a3;
+ (void)_registerDefaultElements;
+ (void)registerViewElementClass:(Class)a0 forElementName:(id)a1;
+ (Class)classForElementType:(unsigned long long)a0;

@end
