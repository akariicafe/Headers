@interface TVElementFactory : NSObject

+ (void)initialize;
+ (void)registerClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2 dependent:(BOOL)a3;
+ (void)registerIKClass:(Class)a0 forElementName:(id)a1 elementType:(unsigned long long)a2 dependent:(BOOL)a3;
+ (void)_registerDefaultElements;
+ (Class)classForElementType:(unsigned long long)a0;
+ (void)registerViewElementClass:(Class)a0 forElementName:(id)a1;

@end
