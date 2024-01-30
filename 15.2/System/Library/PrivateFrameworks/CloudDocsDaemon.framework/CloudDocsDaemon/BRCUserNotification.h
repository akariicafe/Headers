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

- (void)close;
- (void)_updateDialogWithType:(unsigned long long)a0 dict:(id)a1 userReplyBlock:(id /* block */)a2;
- (id)_localizationKey:(id)a0 forTypeOfShare:(id)a1;
- (void)_displayDialogWithType:(unsigned long long)a0 dict:(id)a1 userReplyBlock:(id /* block */)a2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)_updateDialogWithType:(unsigned long long)a0 dict:(id)a1;
- (id)_localizationKey:(id)a0 forOSAndTypeOfShare:(id)a1;
- (void)_displayDialogWithType:(unsigned long long)a0 dict:(id)a1 options:(id)a2 userReplyBlock:(id /* block */)a3;
- (void)showErrorInstallNativeAppForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showErrorDeviceOfflineForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)moveToFront;
- (void)showErrorServerNotReachableForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)_hideCurrentDialog;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (id /* block */)_logWrapUserReplyBlock:(id /* block */)a0;
- (void)showJoinDialogForShareMetadata:(id)a0 session:(id)a1 reply:(id /* block */)a2;
- (void)showErrorReasonUnknownForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)showErrorDocumentsAppNotVisibleForShareURL:(id)a0 reply:(id /* block */)a1;
- (void)showErrorSignInToiCloudForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (id)_localizationKeyForOS:(id)a0;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorParticipantLimitReachedForShareMetadata:(id)a0 reply:(id /* block */)a1;

@end
