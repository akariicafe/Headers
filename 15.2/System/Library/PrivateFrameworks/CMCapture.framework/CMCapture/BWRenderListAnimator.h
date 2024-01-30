@class BWRenderListParameters, BWRenderList, NSObject, BWSpringSimulation;
@protocol OS_dispatch_queue;

@interface BWRenderListAnimator : NSObject {
    NSObject<OS_dispatch_queue> *_preparationMutexQueue;
    BOOL _preparationMutexQueuePrepared;
    BWSpringSimulation *_springSimulation;
}

@property (readonly, retain, nonatomic) BWRenderList *renderList;
@property (readonly, retain, nonatomic) BWRenderListParameters *parameters;
@property (readonly, retain, nonatomic) BWRenderList *initialRenderList;
@property (readonly, retain, nonatomic) BWRenderListParameters *initialParameters;
@property (readonly, retain, nonatomic) BWRenderList *finalRenderList;
@property (readonly, retain, nonatomic) BWRenderListParameters *finalParameters;
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;

+ (void)initialize;

- (void)setPrepared:(BOOL)a0;
- (void)dealloc;
- (void)_configureSpringSimulationWithAnimation:(long long)a0;
- (BOOL)_parametersContainLiveStageRendering:(struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *)a0;
- (id)initWithInitialParameters:(id)a0 initialRenderList:(id)a1 finalParameters:(id)a2 finalRenderList:(id)a3 animation:(long long)a4;
- (void)prepareWithInputVideoFormat:(id)a0 inputDepthFormat:(id)a1;
- (id)interpolateParameters;

@end
