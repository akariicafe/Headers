@class NSString, UNNotificationServiceExtension;

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface> {
    struct atomic_flag { _Atomic BOOL _Value; } _hasRepliedFlag;
}

@property (retain, nonatomic) UNNotificationServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionTimeWillExpire;
- (id)_stageAttachmentsForNotificationContent:(id)a0;
- (void)didReceiveNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
