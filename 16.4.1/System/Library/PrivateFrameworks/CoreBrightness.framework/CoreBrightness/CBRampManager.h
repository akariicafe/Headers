@class CBFrameLink, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface CBRampManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_source> *_clockTimer;
    NSMutableDictionary *_ramps;
    BOOL _activated;
    float _requiredFrequency;
    double _sMachTimebaseFactor;
    CBFrameLink *_frameLink;
    unsigned long long _displayId;
}

@property (copy) id /* block */ clockHandler;
@property (copy) id /* block */ rampDoneCallback;
@property (readonly, nonatomic) BOOL enableFrameSynchronisation;
@property BOOL liveUpdates;

+ (id)className;

- (void)stopTimer;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)activate;
- (id)copyStatusInfo;
- (void)setTimer;
- (void)disableClocking;
- (float)remainingLength;
- (void)enableClocking;
- (void)generateRamp;
- (BOOL)hasAnyActiveRamp;
- (BOOL)hasRampRunningForIdentifier:(id)a0;
- (id)initWithDisplayId:(unsigned long long)a0;
- (id)insertNewLinearRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4;
- (id)insertNewLinearRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 startRamp:(BOOL)a4 identifier:(id)a5;
- (id)insertNewRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4 progressCallback:(id /* block */)a5;
- (id)insertNewRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 startRamp:(BOOL)a4 identifier:(id)a5 progressCallback:(id /* block */)a6;
- (void)insertRamp:(id)a0 identifier:(id)a1;
- (void)insertRamp:(id)a0 identifier:(id)a1 reevaluate:(BOOL)a2;
- (id)rampForIdentifier:(id)a0;
- (void)reevaluateClocking;
- (void)removeAllRamps;
- (void)removeRampWithIdentifier:(id)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)startRamps;
- (void)timerClockHandler;
- (void)updateRampsForTimestamp:(double)a0;

@end
