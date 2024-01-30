@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;

+ (void)load;

- (void)handleSMCCallback:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performLogging:(id)a0;
- (id)handleSysdiagnoseCallback:(id)a0;
- (void)initOperatorDependancies;

@end
