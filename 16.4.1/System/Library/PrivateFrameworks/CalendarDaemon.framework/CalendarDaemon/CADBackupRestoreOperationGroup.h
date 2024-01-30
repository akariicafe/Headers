@class NSString;

@interface CADBackupRestoreOperationGroup : CADOperationGroup <CADBackupRestoreInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CADBackupToICBU:(id)a0 reply:(id /* block */)a1;
- (void)CADRestoreFromDatabaseBackupFileNamed:(id)a0 inDirectory:(id)a1 includeAttachments:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADBackupDatabaseToFileNamed:(id)a0 inDirectory:(id)a1 includeAttachments:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADRestoreFromICBU:(id)a0 reply:(id /* block */)a1;
- (id)_accountStoreForBackupRestore;
- (BOOL)_performRestoreOperation:(id /* block */)a0;

@end
