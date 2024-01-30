@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;

+ (void)load;

- (void)initOperatorDependancies;
- (void)performLogging:(id)a0;
- (void)handleSMCCallback:(id)a0;
- (id)init;
- (id)handleSysdiagnoseCallback:(id)a0;
- (void).cxx_destruct;

@end
