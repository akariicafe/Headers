@class NSString, HDProfile, NSHashTable, NSObject, PSYSyncCoordinator;
@protocol OS_dispatch_queue;

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject>

@property (retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *unfinishedSyncSessions;
@property (readonly) PSYSyncCoordinator *syncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncCoordinatorWithServiceName:(id)a0;

- (id)_typeStringForSyncSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)permitSynchronization;
- (void)dealloc;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)_queue_pairedSyncDidStartWithSession:(id)a0;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (id)_syncRestrictionString;
- (void)_queue_didSendRestoreMessagesForSession:(id)a0 error:(id)a1;
- (void)_queue_didFinishRestoreForSession:(id)a0 error:(id)a1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;

@end
