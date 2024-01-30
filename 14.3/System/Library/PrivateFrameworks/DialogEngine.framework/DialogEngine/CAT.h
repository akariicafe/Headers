@interface CAT : NSObject

+ (void)preload;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 options:(int)a5 completion:(id /* block */)a6;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 completion:(id /* block */)a5;
+ (id)evaluate:(id)a0 propName:(id)a1 parameters:(id)a2 globals:(id)a3;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 completion:(id /* block */)a4;
+ (id)resolve:(id)a0 propName:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
+ (BOOL)downloadMorphunDataByLocale:(id)a0;
+ (BOOL)downloadMorphunDataByLocales:(id)a0;
+ (id)getMorphunPath:(id)a0;
+ (id)getMorphunPaths;

@end
