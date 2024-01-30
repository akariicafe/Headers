@interface MorphunAssetsUpdater : NSObject

+ (id)forceUpdate:(BOOL)a0 updateLanguages:(id)a1 removeLanguages:(id)a2;
+ (id)getPaths:(id *)a0;
+ (id)createError:(id)a0 code:(int)a1;
+ (id)validateMessage:(id)a0;
+ (id)languageCodesFromLocales:(id)a0;
+ (void)forceUpdateWithCompletion:(id)a0 remove:(id)a1 completion:(id /* block */)a2;
+ (id)forceSynchronousUpdateOfLocales:(id)a0 andRemoveLocales:(id)a1;
+ (void)forceUpdateLocales:(id)a0 andRemoveLocales:(id)a1 withCompletion:(id /* block */)a2;
+ (void)getPathsWithCompletion:(id /* block */)a0;

@end
