@class NWParameters, NWPath, NWEndpoint, NSObject;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NWPath *path;
@property (readonly, nonatomic) NWEndpoint *endpoint;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)copySavedPathEvaluatorForEndpoint:(id)a0 parameters:(id)a1;
+ (void)savePathEvaluator:(id)a0;
+ (id)sharedDefaultEvaluator;

- (id)init;
- (void).cxx_destruct;
- (id)copyPath;
- (void)dealloc;
- (id)initWithEvaluator:(id)a0 parameters:(id)a1;
- (id)initWithBrowseDescriptor:(id)a0 parameters:(id)a1;
- (id)initWithListenParameters:(id)a0;
- (void)triggerPathAgentsIncludingVoluntary:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)a0;
- (BOOL)requestNexus;
- (BOOL)matchesEndpoint:(id)a0 parameters:(id)a1;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
