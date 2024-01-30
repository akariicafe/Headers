@class NWParameters, NWPath, NWEndpoint, NSObject;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NWPath *path;
@property (readonly, nonatomic) NWEndpoint *endpoint;

+ (void)initialize;
+ (id)copySavedPathEvaluatorForEndpoint:(id)a0 parameters:(id)a1;
+ (id)sharedDefaultEvaluator;
+ (void)savePathEvaluator:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)matchesEndpoint:(id)a0 parameters:(id)a1;
- (BOOL)requestNexus;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)a0;
- (id)initWithListenParameters:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyPath;
- (void)triggerPathAgentsIncludingVoluntary:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)a0;
- (id)initWithBrowseDescriptor:(id)a0 parameters:(id)a1;
- (id)initWithEvaluator:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;

@end
