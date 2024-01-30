@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, SBRemoteTransientOverlaySessionManagerDelegate;

@interface SBRemoteTransientOverlaySessionManager : NSObject <SBRemoteTransientOverlaySessionHostDelegate> {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
}

@property (weak, nonatomic) id<SBRemoteTransientOverlaySessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionsWithDefinition:(id)a0 options:(long long)a1;
- (id)createSessionWithDefinition:(id)a0;
- (id)sessionWithDefinition:(id)a0 options:(long long)a1;
- (void)remoteTransientOverlaySession:(id)a0 requestsHandlingForButtonEvents:(unsigned long long)a1 viewController:(id)a2;
- (id)existingSessionsWithDefinition:(id)a0 options:(long long)a1;
- (BOOL)remoteTransientOverlaySession:(id)a0 performDismissalRequest:(id)a1;
- (BOOL)remoteTransientOverlaySession:(id)a0 shouldActivateWithContext:(id)a1;
- (long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)a0;
- (BOOL)remoteTransientOverlaySession:(id)a0 performPresentationRequest:(id)a1;
- (void).cxx_destruct;
- (id)existingSessionWithSessionID:(id)a0 options:(long long)a1;
- (id)init;
- (BOOL)hasSessionWithPendingButtonEvents:(unsigned long long)a0 options:(long long)a1;
- (BOOL)hasSessionWithServiceProcessIdentifier:(int)a0 options:(long long)a1;
- (id)_existingSessionsWithDefinition:(id)a0 options:(long long)a1;
- (BOOL)remoteTransientOverlaySession:(id)a0 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)a1;
- (id)_createSessionWithDefinition:(id)a0;
- (void)remoteTransientOverlaySession:(id)a0 didInvalidateWithReason:(long long)a1 error:(id)a2;

@end
