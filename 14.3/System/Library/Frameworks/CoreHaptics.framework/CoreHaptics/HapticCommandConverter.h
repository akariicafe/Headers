@class HapticServerConfig;

@interface HapticCommandConverter : NSObject {
    HapticServerConfig *_serverConfig;
}

- (void).cxx_destruct;
- (unsigned long long)nonSustainedEventTypeFromSharpness:(float)a0;
- (id)eventForTransientHapticEventType:(unsigned long long)a0 time:(double)a1 params:(id)a2 duration:(double)a3;
- (unsigned long long)sustainedEventTypeFromSharpness:(float)a0;
- (unsigned long long)eventTypeFromSharpness:(float)a0 eventType:(int)a1;
- (id)eventForLegacyTransientHapticEventType:(unsigned long long)a0 time:(double)a1 params:(id)a2 duration:(double)a3;
- (id)eventForContinuousHapticEventType:(int)a0 time:(double)a1 params:(id)a2 duration:(double)a3;
- (id)eventForAudioEventType:(unsigned long long)a0 time:(double)a1 eventParams:(id)a2 duration:(double)a3;
- (id)eventForSPIEventType:(unsigned long long)a0 time:(double)a1 eventParams:(id)a2 duration:(double)a3;
- (id)CHtoAVParameterCurve:(id)a0;
- (id)initWithServerConfig:(id)a0;
- (id)eventForEventEntry:(id)a0 engine:(id)a1 privileged:(BOOL)a2;
- (id)eventForDynamicParameterEntry:(id)a0;
- (id)eventForParameterCurveEntry:(id)a0;

@end
