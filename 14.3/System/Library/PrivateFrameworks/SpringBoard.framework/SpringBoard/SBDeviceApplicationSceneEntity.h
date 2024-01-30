@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)entityWithApplicationForMainDisplay:(id)a0 withScenePersistenceIdentifier:(id)a1;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
+ (id)newEntityWithApplicationForMainDisplay:(id)a0;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0;

- (id)initWithApplicationForMainDisplay:(id)a0 generatingNewPrimarySceneIfRequired:(BOOL)a1;
- (id)deviceApplicationSceneEntity;
- (id)initWithApplicationForMainDisplay:(id)a0;
- (Class)viewControllerClass;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)a0;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (BOOL)isDeviceApplicationSceneEntity;
- (BOOL)supportsPresentationAtAnySize;
- (long long)_mainDisplayPreferredInterfaceOrientation;
- (BOOL)wantsExclusiveForeground;
- (id)initWithApplicationSceneHandle:(id)a0;
- (id)initWithApplicationForMainSecureDisplay:(id)a0;
- (id)initWithApplicationForMainDisplay:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 sceneHandleProvider:(id)a3 displayIdentity:(id)a4;
- (id)initWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;

@end
