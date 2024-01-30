@class HMCameraUserSettings, NSUUID;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {
    NSUUID *_targetUUID;
}

@property (weak) HMCameraUserSettings *cameraUserSettings;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;
@property (readonly) unsigned long long notificationEventTriggers;

+ (id)significantEventTypesInPredicate:(id)a0;
+ (id)personFamiliarityOptionsInPredicate:(id)a0;
+ (id)predicateForSignificantEventTypes:(unsigned long long)a0 personFamiliarityOptions:(unsigned long long)a1;
+ (id)predicateForCameraSignificantEvent:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (id)targetUUID;
- (id)description;
- (id)initWithBulletinBoardNotification:(id)a0;
- (void)__configureWithContext:(id)a0 cameraUserSettings:(id)a1;

@end
