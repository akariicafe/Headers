@interface PLPropertyListFilter : NSObject

+ (id)_filterDictionary:(id)a0 block:(id /* block */)a1;
+ (id)_filterArray:(id)a0 block:(id /* block */)a1;
+ (id)filterPropertyList:(id)a0 block:(id /* block */)a1;
+ (id)filterPropertyList:(id)a0;
+ (id)filterPropertyListNoData:(id)a0;
+ (BOOL)canEncodeInPropertyList:(id)a0;

@end
