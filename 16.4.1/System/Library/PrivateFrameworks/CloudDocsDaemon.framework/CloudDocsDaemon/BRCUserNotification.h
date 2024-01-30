@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface BRCUserNotification : NSObject <BRCUserNotifier> {
    struct __CFUserNotification { } *_cfUserNotification;
    struct __CFRunLoopSource { } *_source;
    NSObject<OS_dispatch_source> *_displaySource;
    unsigned long long _nextDisplayBeginTime;
    id _progressSubscriber;
    NSMutableDictionary *_dialogInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)moveToFront;
- (void)_displayDialogWithType:(unsigned long long)a0 dict:(id)a1 options:(id)a2 userReplyBlock:(id /* block */)a3;
- (void)_displayDialogWithType:(unsigned long long)a0 dict:(id)a1 userReplyBlock:(id /* block */)a2;
- (void)_hideCurrentDialog;
- (id)_localizationKey:(id)a0 forOSAndTypeOfShare:(id)a1;
- (id)_localizationKey:(id)a0 forTypeOfShare:(id)a1;
- (id)_localizationKeyForOS:(id)a0;
- (id /* block */)_logWrapUserReplyBlock:(id /* block */)a0;
- (void)_updateDialogWithType:(unsigned long long)a0 dict:(id)a1;
- (void)_updateDialogWithType:(unsigned long long)a0 dict:(id)a1 userReplyBlock:(id /* block */)a2;
- (void)showErrorDeviceOfflineForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorDocumentsAppNotVisibleForShareURL:(id)a0 reply:(id /* block */)a1;
- (void)showErrorInstallNativeAppForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorParticipantLimitReachedForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorReasonUnknownForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorServerNotReachableForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorSignInToiCloudForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showJoinDialogForShareMetadata:(id)a0 session:(id)a1 reply:(id /* block */)a2;

@end
