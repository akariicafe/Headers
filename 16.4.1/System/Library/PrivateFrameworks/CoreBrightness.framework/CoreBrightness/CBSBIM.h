@class CBDisplayModuleiOS, CBEDR, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface CBSBIM : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    CBDisplayModuleiOS *_displayModule;
    BOOL _sbimEnabled;
    BOOL _isMonitoring;
    CBEDR *_edr;
    BOOL _edrOn;
    struct __IOMobileFramebuffer { } *_iomfb;
    unsigned int _iomfbService;
    NSObject<OS_dispatch_source> *_dataTimer;
    NSObject<OS_dispatch_source> *_mitigationTimer;
    const float[3] *_limits;
    unsigned int _limitsSize;
    struct MitigationState { int stage; BOOL violation; unsigned int sbim_reset_frequency; unsigned int sbim_timer_interval; unsigned int mitigation_timer_interval; unsigned int sbim_size; float delta_factor; float minutes_per_stop_mitigate; float minutes_per_stop_recovery; int sbim_above_max; int sbim_sustain_max; int sbim_above_num; int sbim_sustain_num; double lastStateUpdate_; unsigned int sbim_read_stage; struct IOMFBShortTermBIM { unsigned int version; union { struct { unsigned int sbim[3]; unsigned long long duration_us; } v1; } ; } lastSBIMBlock_; float scalingFactor; } mitigation;
}

@property float sdrBrightness;
@property float currentHeadroom;
@property float currentHeadroomRequest;
@property (readonly) float cap;

+ (BOOL)needsSBIM;

- (void)enable;
- (void)disable;
- (id).cxx_construct;
- (void)startMonitoring;
- (void)dealloc;
- (void)stopMonitoring;
- (void)exitEDR;
- (void)dataTimerHandler;
- (void)enableSBIM:(BOOL)a0;
- (void)enterEDR;
- (id)initWithQueue:(id)a0 andDisplayModule:(id)a1 andEDRModule:(id)a2;
- (void)initialiseLimits;
- (float)mitigatedHeadroomFromRequestedHeadroom;
- (const char *)mitigationStageToString:(int)a0;
- (void)mitigationTimerHandler;
- (void)resetMitigationState;
- (void)sendEDRHeadroomRequest:(float)a0;
- (void)updateMitigationStateWithData:(struct IOMFBShortTermBIM { unsigned int x0; union { struct { unsigned int x0[3]; unsigned long long x1; } x0; } x1; })a0 andCurrentHeadroom:(float)a1 andRequestedHeadroom:(float)a2 andSDRBrightness:(float)a3 andReset:(BOOL)a4;

@end
