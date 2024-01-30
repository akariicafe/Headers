@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _PMSmartPowerNap : NSObject <_PMSmartPowerNapProtocol, _PMSmartPowerNapCallbackProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (nonatomic) unsigned char current_state;
@property BOOL connection_interrupted;

- (void)unregister;
- (unsigned char)state;
- (unsigned char)syncState;
- (void)updateState:(unsigned char)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setState:(unsigned char)a0;
- (void)registerWithCallback:(id)a0 callback:(id /* block */)a1;
- (void)reRegister;
- (void)registerWithIdentifier:(id)a0;
- (void)setSPNMotionAlarmStartThreshold:(unsigned int)a0;
- (void)setSPNMotionAlarmThreshold:(unsigned int)a0;
- (void)setSPNReentryCoolOffPeriod:(unsigned int)a0;
- (void)setSPNReentryDelaySeconds:(unsigned int)a0;
- (void)setSPNRequeryDelta:(unsigned int)a0;
- (void)syncStateWithHandler:(id /* block */)a0;
- (void)unregisterWithIdentifier:(id)a0;

@end
