@interface MLLoader : NSObject

+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 error:(id *)a3;
+ (id)loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadUpdatableModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)unarchiveCodedModelFrom:(void *)a0 to:(id *)a1 error:(id *)a2;
+ (BOOL)createDecryptSessionForModelAtURL:(id)a0 configuration:(id)a1 decryptSession:(id *)a2 loaderEvent:(id)a3 error:(id *)a4;
+ (id)loadUpdatableModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromArchive:(void *)a0 error:(id *)a1;
+ (id)loadModelFromAssetAtURL:(id)a0 error:(id *)a1;
+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 loaderEvent:(id)a2 error:(id *)a3;
+ (BOOL)checkAssetPath:(id)a0 error:(id *)a1;

@end
