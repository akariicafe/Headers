@interface WRM_UCMInterface : WRMClientInterface

- (void)registerClient:(int)a0 queue:(id)a1;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (void)setCriticalAirPlayEnabled:(BOOL)a0 estimatedDuration:(unsigned int)a1 criticalityPercentage:(unsigned short)a2;

@end
