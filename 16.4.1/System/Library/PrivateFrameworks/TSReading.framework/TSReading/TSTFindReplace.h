@interface TSTFindReplace : NSObject

+ (void)p_searchInfo:(id)a0 layout:(id)a1 forAnnotationsWithHitBlock:(id /* block */)a2;
+ (void)searchInfo:(id)a0 forAnnotationsWithHitBlock:(id /* block */)a1;
+ (void)searchInfo:(id)a0 forString:(id)a1 options:(unsigned long long)a2 hitBlock:(id /* block */)a3;
+ (void)searchLayout:(id)a0 forAnnotationsWithHitBlock:(id /* block */)a1;
+ (void)searchLayout:(id)a0 forSpellingErrorsWithHitBlock:(id /* block */)a1 stop:(BOOL *)a2;
+ (void)searchLayout:(id)a0 forString:(id)a1 options:(unsigned long long)a2 hitBlock:(id /* block */)a3;

@end
