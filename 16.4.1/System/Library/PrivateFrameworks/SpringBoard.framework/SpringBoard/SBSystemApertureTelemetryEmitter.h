@interface SBSystemApertureTelemetryEmitter : NSObject

+ (void)_emitCoreAnalyticsTelemetryIfNecessaryWithLayoutState:(id)a0 previousLayoutState:(id)a1;
+ (void)_emitPowerLogIfNecessaryWithLayoutState:(id)a0 previousLayoutState:(id)a1;
+ (void)logTelemetryForInteractionLongPress:(BOOL)a0 clientIdentifier:(id)a1 elementIdentifier:(id)a2;
+ (void)logTelemetryForInteractionPanGesture:(long long)a0 handled:(BOOL)a1 clientIdentifier:(id)a2 elementIdentifier:(id)a3;
+ (void)logTelemetryForInteractionTap:(BOOL)a0 clientIdentifier:(id)a1 elementIdentifier:(id)a2;
+ (void)logTelemetryForLayoutState:(id)a0 previousLayoutState:(id)a1;
+ (id)stringBySanitizingNil:(id)a0;

@end
