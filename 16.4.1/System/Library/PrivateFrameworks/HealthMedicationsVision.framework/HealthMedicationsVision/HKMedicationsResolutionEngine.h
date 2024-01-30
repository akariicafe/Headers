@class HKMedicationsResolver, NSObject;
@protocol OS_dispatch_queue;

@interface HKMedicationsResolutionEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HKMedicationsResolver *resolver;

+ (BOOL)isVisionAssetAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)filter:(id)a0 transcripts:(id)a1 criterion:(float)a2 limit:(long long)a3 completionHandler:(id /* block */)a4;
- (void)resetResolverWithCompletionHandler:(id /* block */)a0;
- (void)resolveMedicationsUsing:(id)a0 resultLimit:(long long)a1 completionHandler:(id /* block */)a2;
- (id)hkctl_resolveMedicationsUsing:(id)a0 resultLimit:(long long)a1 error:(inout id *)a2;
- (id)initWithAssetUrl:(id)a0;

@end
