@class UNSPendingNotificationRepository, NSString, UNSAttachmentsRepository, UNSNotificationSchedulingService, NSObject, UNSNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_notificationIdentifiersForNotificationRecords:(id)a0;
+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)a0;
+ (id)_stagingDirectory;

- (id)_queue_resolveAttachmentsForRequest:(id)a0 bundleIdentifier:(id)a1 bundleProxy:(id)a2 continueOnFailure:(BOOL)a3 error:(id *)a4;
- (void)pendingNotificationRepository:(id)a0 didPerformUpdates:(id)a1 forBundleIdentifier:(id)a2;
- (id)_temporaryAttachmentFileURL;
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)a0 request:(id)a1 bundleIdentifier:(id)a2 bundleProxy:(id)a3 error:(id *)a4;
- (void)notificationRepository:(id)a0 didPerformUpdates:(id)a1 forBundleIdentifier:(id)a2;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)_repositoryDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)a0 bundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithAttachmentsRepository:(id)a0 notificationRepository:(id)a1 notificationSchedulingService:(id)a2 pendingNotificationRepository:(id)a3;
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)a0 bundleIdentifier:(id)a1 bundleProxy:(id)a2;
- (id)resolveAttachmentsForRequest:(id)a0 bundleIdentifier:(id)a1 bundleProxy:(id)a2 error:(id *)a3;
- (void)_queue_applicationDidUninstall:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)a0 bundleIdentifier:(id)a1;
- (void)_beginObservingNotificationChanges;
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)a0 request:(id)a1 bundleIdentifier:(id)a2 bundleProxy:(id)a3 error:(id *)a4;
- (void)_notificationIdentifiersForBundleIdentifier:(id)a0 replyOnQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)ensureIntegrityWithCompletionHandler:(id /* block */)a0;
- (void)_queue_ensureIntegrityWithCompletionHandler:(id /* block */)a0;
- (id)_queue_resolvedURLForNotificationAttachment:(id)a0 request:(id)a1 bundleIdentifier:(id)a2 bundleProxy:(id)a3 error:(id *)a4;

@end
