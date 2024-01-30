@class NSArray, NSMutableDictionary, NWParameters, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface NWCandidatePathMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *primaryEvaluator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *remoteEndpoints;
@property (retain, nonatomic) NSMutableDictionary *candidatePathEvaluators;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic) NSArray *interfaces;
@property (readonly, nonatomic) NSArray *candidatePaths;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParameters:(id)a0;
- (id)cParameters;
- (void)cancelCandidatePathEvaluators;
- (void)resetCandidatePathEvaluators;
- (void)startWithQueue:(id)a0 updateHandler:(id /* block */)a1;
- (void)cancelWithHandler:(id /* block */)a0;
- (id)interfacesLocked;
- (void)updateRemoteEndpoints:(id)a0;

@end
