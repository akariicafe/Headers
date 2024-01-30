@interface CNLocalization : NSObject

+ (id)localizedStringForString:(id)a0 class:(Class)a1 returningNilIfNotFound:(BOOL)a2;
+ (id)localizedStringForString:(id)a0 bundle:(id)a1 table:(id)a2 returningNilIfNotFound:(BOOL)a3;
+ (id)localizedStringForString:(id)a0 class:(Class)a1 lookupBlock:(id /* block */)a2 returningNilIfNotFound:(BOOL)a3;
+ (id)localizedStringForString:(id)a0 bundle:(id)a1 table:(id)a2 lookupBlock:(id /* block */)a3 returningNilIfNotFound:(BOOL)a4;

@end
