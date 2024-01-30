@interface CAT : NSObject

+ (void)preload;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 options:(int)a5 completion:(id /* block */)a6;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 completion:(id /* block */)a5;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 completion:(id /* block */)a4;
+ (void)execute:(id)a0 paramsXML:(id)a1 localeXML:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6 completion:(id /* block */)a7;
+ (void)execute:(id)a0 templateDir:(id)a1 catId:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6 completion:(id /* block */)a7;
+ (id)execute:(id)a0 templateDir:(id)a1 catId:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6;
+ (id)evaluate:(id)a0 propName:(id)a1 parameters:(id)a2 globals:(id)a3;
+ (id)resolve:(id)a0 propName:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
+ (BOOL)downloadMorphunDataByLocale:(id)a0;
+ (BOOL)downloadMorphunDataByLocales:(id)a0;
+ (id)getMorphunPath:(id)a0;
+ (id)getMorphunPaths;
+ (BOOL)runTests:(id)a0;

@end
