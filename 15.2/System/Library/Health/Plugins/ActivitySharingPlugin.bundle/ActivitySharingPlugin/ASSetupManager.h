@class NSString;

@interface ASSetupManager : NSObject <ASActivitySharingManagerReadyObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activitySharingManagerReady:(id)a0;
- (void)_migrateToTwoWaySyncSetupDefault;

@end
