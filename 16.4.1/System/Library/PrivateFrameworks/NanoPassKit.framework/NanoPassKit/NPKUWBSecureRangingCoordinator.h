@interface NPKUWBSecureRangingCoordinator : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_handleCarKeyRangingDidResumeNotification:(id)a0;
- (void)_handleCarKeyRangingDidSuspendNotification:(id)a0;
- (void)_parseNearFieldNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outApplicationKeyIdentifier:(id *)a2;
- (id)pauseRangingForPass:(id)a0 durationInSeconds:(id)a1;
- (id)resumeRangingForPass:(id)a0;

@end
