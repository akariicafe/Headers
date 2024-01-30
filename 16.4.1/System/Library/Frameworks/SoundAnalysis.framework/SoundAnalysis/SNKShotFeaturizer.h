@interface SNKShotFeaturizer : NSObject

+ (id)featurizeFiles:(id)a0 hallucinatorModelURL:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)featurizeFiles:(id)a0 hallucinatorModelURL:(id)a1 queue:(id)a2 resultHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (id)performSegmentationRequest:(id)a0 error:(id *)a1;
+ (id)plistFromFeaturizationResult:(id)a0 error:(id *)a1;

@end
