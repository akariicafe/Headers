@class MechanismContext, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MechanismManager : NSObject {
    NSMutableDictionary *_plugins;
    MechanismContext *_mechanismContext;
}

@property (readonly, nonatomic) long long evaluatedPolicy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

- (void).cxx_destruct;
- (id)init;
- (id)loadMechanism:(long long)a0 initParams:(id)a1 request:(id)a2 className:(id)a3 error:(id *)a4;
- (BOOL)_canLoadPlugin:(long long)a0 className:(id)a1 userId:(id)a2 error:(id *)a3;
- (id)_pathForPlugin:(long long)a0 error:(id *)a1;
- (void)_logClass:(Class)a0 tag:(id)a1;
- (void)_logClass:(Class)a0 tag:(id)a1 level:(int)a2;
- (id)loadMechanism:(long long)a0 initParams:(id)a1 request:(id)a2 error:(id *)a3;

@end
