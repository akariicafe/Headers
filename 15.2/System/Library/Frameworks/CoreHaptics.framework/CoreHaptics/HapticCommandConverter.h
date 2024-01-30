@class HapticServerConfig;

@interface HapticCommandConverter : NSObject

@property (readonly) HapticServerConfig *serverConfig;

- (void).cxx_destruct;
- (unsigned long long)transientHapticEventTypeFromSharpness:(float)a0;
- (id)initWithServerConfig:(id)a0;
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;
- (id)eventForTransientHapticAtTime:(double)a0 params:(id)a1 duration:(double)a2;
- (id)CHtoAVParameterCurve:(id)a0;
- (unsigned long long)continuousHapticEventTypeFromSharpness:(float)a0 sustained:(BOOL)a1;
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:(BOOL)a0;
- (id)eventForLegacyTransientHapticAtTime:(double)a0 params:(id)a1 duration:(double)a2;
- (id)eventForContinuousHapticEventType:(int)a0 time:(double)a1 params:(id)a2 duration:(double)a3;
- (id)eventForAudioEventType:(unsigned long long)a0 time:(double)a1 eventParams:(id)a2 duration:(double)a3;
- (id)eventForSPIEventType:(unsigned long long)a0 time:(double)a1 eventParams:(id)a2 duration:(double)a3;
- (id)eventForEventEntry:(id)a0 engine:(id)a1 privileged:(BOOL)a2;
- (id)eventForDynamicParameterEntry:(id)a0;
- (id)eventForParameterCurveEntry:(id)a0;

@end
