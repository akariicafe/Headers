@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
+ (id)entityWithApplicationForMainDisplay:(id)a0 withScenePersistenceIdentifier:(id)a1;
+ (id)newEntityWithApplicationForMainDisplay:(id)a0;

- (BOOL)_supportsLayoutRole:(long long)a0;
- (id)initWithApplicationForMainDisplay:(id)a0 uniqueIdentifier:(id)a1;
- (Class)viewControllerClass;
- (id)initWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
- (BOOL)supportsPresentationAtAnySize;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)a0;
- (BOOL)isDeviceApplicationSceneEntity;
- (id)initWithApplicationForMainDisplay:(id)a0;
- (id)initWithApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 sceneHandleProvider:(id)a3 displayIdentity:(id)a4;
- (id)initWithApplicationForMainSecureDisplay:(id)a0;
- (long long)_mainDisplayPreferredInterfaceOrientation;
- (id)initWithApplicationSceneHandle:(id)a0;
- (BOOL)wantsExclusiveForeground;
- (id)initWithApplicationForMainDisplay:(id)a0 generatingNewPrimarySceneIfRequired:(BOOL)a1;
- (id)deviceApplicationSceneEntity;

@end
