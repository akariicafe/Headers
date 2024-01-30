@class NPKPassSyncState, NSString, NPKPassSyncChange;
@protocol NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource;

@interface NPKPassSyncEngine : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requireAppleAccountForPaymentPasses;
@property (retain, nonatomic) NPKPassSyncState *backupState;
@property (weak, nonatomic) id<NPKPassSyncEngineDelegate> delegate;
@property (weak, nonatomic) id<NPKPassSyncEngineDataSource> dataSource;
@property (retain, nonatomic) NPKPassSyncState *libraryState;
@property (retain, nonatomic) NPKPassSyncState *reconciledState;
@property (retain, nonatomic) NPKPassSyncState *candidateState;
@property (retain, nonatomic) NPKPassSyncChange *candidateChange;
@property (retain, nonatomic) NPKPassSyncChange *processingChange;
@property (readonly, nonatomic) NSString *engineName;
@property (readonly, nonatomic) unsigned long long engineRole;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_sendStateChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRole:(unsigned long long)a0;
- (void)handleStateChange:(id)a0;
- (void)handleStateChangeProcessedWithUUID:(id)a0 changeAccepted:(BOOL)a1 fullPassRequired:(BOOL)a2;
- (void)handleReconciledStateUnrecognizedWithHash:(id)a0 passSyncState:(id)a1;
- (void)handleProposedReconciledState:(id)a0;
- (void)handleReconciledStateAcceptedWithHash:(id)a0;
- (void)syncIfNecessary;
- (void)_sendNextStateChange;
- (void)_unexpectedEventOccurred;
- (void)_sendStateChangeProcessedWithUUID:(id)a0 changeAccepted:(BOOL)a1 fullPassRequired:(BOOL)a2;
- (void)_requestAddPassData:(id)a0 forSyncStateItem:(id)a1 completion:(id /* block */)a2;
- (void)_requestUpdatePassData:(id)a0 forSyncStateItem:(id)a1 baseManifestHashForPartialUpdate:(id)a2 remoteAssetsForPartialUpdate:(id)a3 completion:(id /* block */)a4;
- (void)_requestRemovePassWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)_shouldProcessAddOrUpdateChangeOfType:(unsigned long long)a0 changeSyncStateItem:(id)a1 librarySyncStateItem:(id)a2 reconciledSyncStateItem:(id)a3 candidateChange:(id)a4 shouldApplyToPassLibrary:(BOOL *)a5 shouldApplyToReconciledState:(BOOL *)a6;
- (void)_finishedProcessingChange:(id)a0;
- (void)_sendReconciledStateUnrecognizedWithHash:(id)a0 currentPassSyncState:(id)a1;
- (void)_receivedStateChangeProcessed:(id)a0 changeAccepted:(BOOL)a1;
- (void)_sendProposedReconciledState:(id)a0;
- (void)_sendReconciledStateAcceptedWithHash:(id)a0;
- (void)_engineStateChanged;

@end
