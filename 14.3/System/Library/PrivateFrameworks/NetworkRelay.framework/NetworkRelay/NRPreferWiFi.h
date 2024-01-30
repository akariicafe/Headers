@class NSUUID, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_path, OS_dispatch_source, OS_dispatch_queue;

@interface NRPreferWiFi : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_nw_path> *path;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *evaluator;
@property (nonatomic) unsigned long long assertCount;
@property (retain, nonatomic) NSUUID *agentUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL needsReassert;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)submitRequest:(BOOL)a0;
- (BOOL)hasPreferWiFi;
- (void)resetInner;
- (void)updateAgentUUID:(id)a0;

@end
