@interface MLLoader : NSObject

+ (BOOL)createDecryptSessionForModelAtURL:(id)a0 configuration:(id)a1 decryptSession:(id *)a2 loaderEvent:(id)a3 error:(id *)a4;
+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 error:(id *)a3;
+ (void)populateLoaderAndPredictionEvent:(id)a0 model:(id)a1 configuration:(id)a2 loadTimeDuration:(unsigned long long)a3;
+ (id)loadUpdatableModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadUpdatableModelWithClass:(Class)a0 fromArchive:(void *)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)loadModelFromArchive:(void *)a0 error:(id *)a1;
+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadUpdatableModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)unarchiveCodedModelFrom:(void *)a0 to:(id *)a1 error:(id *)a2;
+ (id)loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 loaderEvent:(id)a2 error:(id *)a3;
+ (BOOL)checkAssetPath:(id)a0 error:(id *)a1;
+ (id)loadModelWithClass:(Class)a0 fromArchive:(void *)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 useUpdatableModelLoaders:(BOOL)a3 error:(id *)a4;
+ (id)loadModelFromAssetAtURL:(id)a0 error:(id *)a1;

@end
