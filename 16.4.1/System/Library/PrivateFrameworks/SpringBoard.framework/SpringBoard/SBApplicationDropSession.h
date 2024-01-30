@class SBApplication, NSString, NSSet, FBSSceneIdentity, SBActivationSettings, NSObject, SBSAppDragLocalContext, UIDraggingSystemSession;
@protocol OS_dispatch_group, UIDragDropSession;

@interface SBApplicationDropSession : NSObject {
    NSObject<OS_dispatch_group> *_activationSettingsGroup;
}

@property (retain, nonatomic) FBSSceneIdentity *sceneIdentity;
@property (copy, nonatomic) NSString *targetContentIdentifier;
@property (readonly, nonatomic) SBApplication *application;
@property (readonly, nonatomic) id<UIDragDropSession> uiDragDropSession;
@property (readonly, nonatomic) UIDraggingSystemSession *systemSession;
@property (readonly, nonatomic) long long dropZones;
@property (readonly, nonatomic, getter=isNotificationDrag) BOOL notificationDrag;
@property (readonly, nonatomic, getter=isWindowTearOff) BOOL windowTearOff;
@property (readonly, nonatomic) SBSAppDragLocalContext *localContext;
@property (readonly, nonatomic) SBActivationSettings *activationSettings;
@property (readonly, nonatomic) NSSet *launchActions;

+ (id)_applicationForHandlingDragItem:(id)a0 URL:(id)a1 error:(id *)a2;
+ (id)_applicationForIconLeafIdentifier:(id)a0;
+ (id)_applicationProxyForIdentifiers:(id)a0 forURL:(id)a1 passingTest:(id /* block */)a2 error:(id *)a3;
+ (BOOL)_dragItemRepresentsAcceptableFileDrag:(id)a0;
+ (void)_getFileDropSessionWithUIDragDropSession:(id)a0 dragItem:(id)a1 systemSession:(id)a2 targetApplication:(id)a3 completion:(id /* block */)a4;
+ (void)_getLocalAppDropSessionWithUIDragDropSession:(id)a0 dragItem:(id)a1 systemSession:(id)a2 completion:(id /* block */)a3;
+ (void)_getURLDropSessionWithUIDragDropSession:(id)a0 dragItem:(id)a1 systemSession:(id)a2 targetApplication:(id)a3 completion:(id /* block */)a4;
+ (void)_getUserActivityDropSessionWithUIDragDropSession:(id)a0 dragItem:(id)a1 systemSession:(id)a2 targetApplication:(id)a3 completion:(id /* block */)a4;
+ (void)_getUserNotificationDropSessionWithUIDragDropSession:(id)a0 systemSession:(id)a1 dragItem:(id)a2 completion:(id /* block */)a3;
+ (BOOL)_itemProviderRequiresOpenInPlace:(id)a0;
+ (BOOL)canHandleUIDragDropSession:(id)a0;
+ (id)dropSessionWithWindowUIDragSession:(id)a0;
+ (void)getDropSessionWithUIDropSession:(id)a0 sceneProvider:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_initWithUIDragDropSession:(id)a0 application:(id)a1 targetContentIdentifier:(id)a2;
- (id)_activityContinuationActionFromActivity:(id)a0 activityData:(id)a1;
- (BOOL)_isApplicationBoundToVisibleIcon;
- (void)calculateSceneIdentityWithSceneProvider:(id)a0 completion:(id /* block */)a1;
- (id)initWithUIDragDropSession:(id)a0 systemSession:(id)a1 application:(id)a2 activity:(id)a3 activityData:(id)a4;
- (id)initWithUIDragDropSession:(id)a0 systemSession:(id)a1 application:(id)a2 targetContentIdentifier:(id)a3;
- (id)initWithUIDragDropSession:(id)a0 systemSession:(id)a1 application:(id)a2 targetContentIdentifier:(id)a3 URL:(id)a4 requiresOpenInPlace:(BOOL)a5;
- (id)initWithUIDragDropSession:(id)a0 systemSession:(id)a1 application:(id)a2 targetContentIdentifier:(id)a3 localContext:(id)a4 activity:(id)a5 activityData:(id)a6;

@end
