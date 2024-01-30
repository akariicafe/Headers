@interface CAT : NSObject

+ (void)preload;
+ (void)execute:(id)a0 paramsXML:(id)a1 localeXML:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6 completion:(id /* block */)a7;
+ (void)execute:(id)a0 templateDir:(id)a1 catId:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6 completion:(id /* block */)a7;
+ (id)getMorphunPaths;
+ (id)getMorphunPath:(id)a0;
+ (BOOL)downloadMorphunDataByLocale:(id)a0;
+ (BOOL)downloadMorphunDataByLocales:(id)a0;
+ (id)evaluate:(id)a0 propName:(id)a1 parameters:(id)a2 globals:(id)a3;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 completion:(id /* block */)a5;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 options:(int)a5 completion:(id /* block */)a6;
+ (void)execute:(id)a0 catId:(id)a1 parameters:(id)a2 globals:(id)a3 completion:(id /* block */)a4;
+ (id)execute:(id)a0 templateDir:(id)a1 catId:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6;
+ (id)getBuiltinDialogMetadataCategoryNamesForLocale:(id)a0;
+ (id)getBuiltinDialogMetadataForLocale:(id)a0;
+ (id)getDialogAssetsVersion:(id)a0;
+ (id)getDialogAssetsVersion:(id)a0 enableUpdates:(BOOL)a1;
+ (id)getDialogMetadataCategoryNamesForLocale:(id)a0 locale:(id)a1;
+ (id)getDialogMetadataForLocale:(id)a0 locale:(id)a1;
+ (id)getDialogStateFamily:(id)a0;
+ (id)getDialogStateUseCase:(id)a0;
+ (id)resolve:(id)a0 propName:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
+ (BOOL)runTests:(id)a0;

@end
