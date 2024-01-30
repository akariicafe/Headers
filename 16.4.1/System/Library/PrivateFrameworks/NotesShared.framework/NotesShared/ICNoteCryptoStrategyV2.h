@class NSString;

@interface ICNoteCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICNoteCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decrypt;
- (void)alignAccountSaltAndICWithPassphrase:(id)a0;
- (void)applyAccountSaltAndICWithPassphrase:(id)a0;
- (id)decryptNotePrimitiveData;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)a0;
- (id)encryptedDataFromRecord:(id)a0;
- (void)fixDivergedAttachmentsUsingPassphrase:(id)a0;
- (void)mergeEncryptedData:(id)a0 mergeConflict:(id)a1;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (void)serializeToNoteDataAndUpdateArchivedAndLastViewedTimeStamps:(id)a0;
- (void)writeEncryptedNoteData:(id)a0;

@end
