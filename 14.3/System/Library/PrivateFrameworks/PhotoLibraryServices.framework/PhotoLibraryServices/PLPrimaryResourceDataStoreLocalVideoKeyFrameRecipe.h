@class NSMutableSet, NSMutableOrderedSet;

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _jobLock;
    NSMutableOrderedSet *_jobQueue;
    NSMutableSet *_inflightJobs;
}

+ (void)_generateKeyFrameFromVideoURL:(id)a0 destinationURL:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completion:(id /* block */)a3;

- (unsigned int)recipeID;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (void).cxx_destruct;
- (void)generateAndStoreForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)_nextJobAfterCompletingInflightJob:(id)a0;
- (void)_handleKeyFrameGeneratedWithSuccess:(BOOL)a0 error:(id)a1 asset:(id)a2 destinationURL:(id)a3 completion:(id /* block */)a4;
- (void)_generateAndStoreForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 progress:(id *)a4 reason:(id)a5 completion:(id /* block */)a6;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)codecInContext:(id)a0;
- (void)_runJob:(id)a0;
- (id)initWithRecipeID:(unsigned int)a0;

@end
