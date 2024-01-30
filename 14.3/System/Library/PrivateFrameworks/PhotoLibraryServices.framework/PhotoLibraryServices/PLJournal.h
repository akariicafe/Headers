@class NSURL, PLJournalFile, NSDictionary;

@interface PLJournal : NSObject {
    PLJournalFile *_snapshotJournal;
    PLJournalFile *_changeJournal;
    unsigned char _snapshotMode;
}

@property (readonly, nonatomic) PLJournalFile *pendingSnapshotJournal;
@property (readonly, nonatomic) PLJournalFile *pendingChangeJournal;
@property (readonly, nonatomic) PLJournalFile *prepareMarker;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) PLJournalFile *snapshotJournal;
@property (readonly, nonatomic) PLJournalFile *changeJournal;
@property (readonly, nonatomic) Class payloadClass;

+ (BOOL)snapshotFinishMarkerExistsForBaseURL:(id)a0;
+ (id)metadataURLForBaseURL:(id)a0 payloadClassId:(id)a1 pending:(BOOL)a2;
+ (id)journalURLForBaseURL:(id)a0 payloadClassId:(id)a1 journalType:(id)a2;
+ (id)snapshotFinishMarkerURLForBaseURL:(id)a0;
+ (BOOL)createSnapshotFinishMarkerForBaseURL:(id)a0 error:(id *)a1;
+ (BOOL)removeSnapshotFinishMarkerForBaseURL:(id)a0 error:(id *)a1;
+ (BOOL)recoverJournalsIfNecessaryForBaseURL:(id)a0 payloadClasses:(id)a1 error:(id *)a2;
+ (BOOL)createSnapshotsForBaseURL:(id)a0 payloadClasses:(id)a1 snapshotJournalBlock:(id /* block */)a2 error:(id *)a3;
+ (BOOL)appendSnapshotsForBaseURL:(id)a0 payloadClasses:(id)a1 snapshotJournalBlock:(id /* block */)a2 error:(id *)a3;
+ (BOOL)_performSnapshotsForBaseURL:(id)a0 snapshotMode:(unsigned char)a1 payloadClasses:(id)a2 snapshotJournalBlock:(id /* block */)a3 error:(id *)a4;
+ (BOOL)_finishFullSnapshotForBaseURL:(id)a0 snapshotSucceeded:(BOOL)a1 snapshotMode:(unsigned char)a2 journals:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (BOOL)appendSnapshotUsingNextEntryBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)appendUpdatePayloadWithPayloadID:(id)a0 attributes:(id)a1 error:(id *)a2;
- (BOOL)appendChangeEntries:(id)a0 error:(id *)a1;
- (BOOL)createSnapshotUsingNextPayloadBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)enumeratePayloadsUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithBaseURL:(id)a0 payloadClass:(Class)a1;
- (BOOL)enumerateEntriesUsingBlock:(id /* block */)a0 decodePayload:(BOOL)a1 error:(id *)a2;
- (void)removeMetadata;
- (id)metadataURLPending:(BOOL)a0;
- (BOOL)_removeMetadataPending:(BOOL)a0 error:(id *)a1;
- (BOOL)_replaceMetadataWithPendingMetadataError:(id *)a0;
- (id)_readMetadataPending:(BOOL)a0;
- (BOOL)_updateMetadataWithMetadata:(id)a0 replace:(BOOL)a1 pending:(BOOL)a2 error:(id *)a3;
- (BOOL)removeJournalFilesWithError:(id *)a0;
- (BOOL)_isPendingJournalAuthoritative;
- (BOOL)_recoverJournalWithError:(id *)a0;
- (BOOL)_prepareForSnapshotWithMode:(unsigned char)a0 error:(id *)a1;
- (BOOL)_finishSnapshotWithMode:(unsigned char)a0 snapshotSuccess:(BOOL)a1 error:(id *)a2;
- (BOOL)_performSnapshotWithMode:(unsigned char)a0 usingNextEntryBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)prepareForCreateSnapshotWithError:(id *)a0;
- (BOOL)finishCreateSnapshot:(BOOL)a0 error:(id *)a1;
- (BOOL)coalesceChangesToSnapshotWithError:(id *)a0;
- (BOOL)snapshotJournalFileSize:(unsigned long long *)a0 changeJournalFileSize:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)countOfInsertEntriesWithError:(id *)a0;
- (unsigned long long)currentPayloadVersionWithError:(id *)a0;
- (id)_payloadTooNewErrorWithPayloadVersion:(long long)a0;

@end
