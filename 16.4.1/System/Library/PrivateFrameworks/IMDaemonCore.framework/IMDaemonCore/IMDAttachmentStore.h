@interface IMDAttachmentStore : NSObject

+ (id)sharedInstance;
+ (void)_askToTapToRadarForErrorString:(id)a0 path:(id)a1;
+ (BOOL)_cloudkitSyncingEnabled;
+ (BOOL)fileEligibleForCacheDelete:(id)a0;
+ (BOOL)updateTransferIn:(id)a0 fromGUID:(id)a1 toGUID:(id)a2;

- (id)database;
- (void)markAllAttachmentsAsNotPurgeable;
- (BOOL)deleteAttachmentsForMessage:(id)a0;
- (void)markAttachmentPurgeable:(id)a0;
- (BOOL)_shouldEarlyReturnForWrongItemType:(id)a0;
- (void)_reindexMessage:(id)a0 completion:(id /* block */)a1;
- (id)attachmentsWithGUIDs:(id)a0;
- (BOOL)deleteAttachmentDataForTransfer:(id)a0;
- (BOOL)isSafeToDeleteAttachmentAtPath:(id)a0;
- (BOOL)deleteAttachmentsWithGUIDs:(id)a0;
- (id)attachmentWithGUID:(id)a0;
- (void)deleteAttachmentsDirectWithPredicate:(id)a0;
- (id)_updatedMessageBody:(id)a0 replacingGuid:(id)a1 withGuid:(id)a2;
- (BOOL)removeAttachment:(id)a0 fromMessageWithGUID:(id)a1;
- (BOOL)_transferCanBeMarkedPurgable:(id)a0;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)a0;
- (BOOL)_updateLegacyTransferGUIDOn:(id)a0 andUpdateMessageIfNeeded:(id)a1 transfersToSync:(id)a2;
- (void)markFile:(id)a0 asPurgeable:(BOOL)a1;
- (BOOL)storeAttachment:(id)a0 associateWithMessageWithGUID:(id)a1 chatGUID:(id)a2 storeAtExternalLocation:(BOOL)a3;
- (BOOL)deleteAttachmentWithGUID:(id)a0;
- (BOOL)updateLegacyTransferGUIDIfNeeded:(id)a0 transfersToSync:(id)a1;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)_loadAttachmentRecordForGUID:(id)a0;
- (id)_newFileTransferFromIMDAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)a0;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (BOOL)updateAttachment:(id)a0;
- (BOOL)updateLegacyTransferGUIDOnMessageIfNeeded:(id)a0;
- (BOOL)storeAttachment:(id)a0 associateWithMessageWithGUID:(id)a1;
- (BOOL)updateAttachment:(id)a0 chatGUID:(id)a1 storeAtExternalPath:(BOOL)a2;
- (id)_IMTransferGUIDForMessageGUID:(id)a0 andIndex:(unsigned long long)a1;
- (void)markAttachmentUnpurgeable:(id)a0;
- (void)markAttachment:(id)a0 purgeable:(BOOL)a1;
- (id)attachmentsFilteredUsingPredicate:(id)a0 limit:(unsigned long long)a1;
- (BOOL)_updateAttachmentGUID:(id)a0 withGUID:(id)a1;

@end
