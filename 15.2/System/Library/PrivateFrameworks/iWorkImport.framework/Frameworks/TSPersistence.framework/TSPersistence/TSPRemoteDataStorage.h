@class NSMutableIndexSet, NSIndexSet, SFUCryptoKey, NSURL, NSDate, NSObject, TSPTemporaryDataStorage;
@protocol OS_dispatch_queue, TSPRemoteDataStorageDelegate, TSPDataStorage;

@interface TSPRemoteDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable> {
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPTemporaryDataStorage *_temporaryMaterializedDataStorage;
    unsigned long long _changeCount;
    NSMutableIndexSet *_unmaterializedRanges;
    id<TSPDataStorage> _packageDataStorage;
    long long _uploadStatus;
    NSDate *_modificationDate;
    BOOL _canDownload;
    _Atomic BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
}

@property (weak, nonatomic) id<TSPRemoteDataStorageDelegate> delegate;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) BOOL isMaterialized;
@property (readonly, nonatomic) NSIndexSet *unmaterializedRanges;
@property (readonly, nonatomic) unsigned long long firstUnmaterializedIndex;
@property (readonly, nonatomic) unsigned long long materializedLength;
@property (readonly, nonatomic) long long downloadPriority;
@property (nonatomic) long long uploadStatus;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) id<TSPDataStorage> packageDataStorage;

+ (id)ioQueue;
+ (id)notificationQueue;

- (BOOL)isReadable;
- (unsigned long long)length;
- (BOOL)canDownload;
- (void).cxx_destruct;
- (unsigned char)packageIdentifier;
- (BOOL)needsDownload;
- (unsigned long long)encodedLength;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (id)initWithRemoteURL:(id)a0 length:(unsigned long long)a1 encryptionKey:(id)a2 canDownload:(BOOL)a3 downloadPriority:(long long)a4 uploadStatus:(long long)a5 modificationDate:(id)a6;
- (BOOL)migrateToTemporaryDataStorageIfNeeded;
- (BOOL)isPartialDataInPackage:(id)a0;
- (id)decryptionInfo;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (void)didSaveWithChangeCount:(unsigned long long)a0 packageDataStorage:(id)a1;
- (id)initWithRemoteURL:(id)a0 unmaterializedRanges:(id)a1 encryptionKey:(id)a2 canDownload:(BOOL)a3 downloadPriority:(long long)a4 uploadStatus:(long long)a5 modificationDate:(id)a6 packageDataStorage:(id)a7;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (void)didInitializeFromDocumentURL:(id)a0;
- (void)didReceiveRemoteDataAtURL:(id)a0 canMove:(BOOL)a1 decryptionInfo:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)didAddDownloadObserverWithData:(id)a0;
- (BOOL)p_isMaterialized;
- (unsigned long long)p_materializedLength;
- (void)p_notifyDownloadObserversWithStatus:(long long)a0 error:(id)a1;
- (void)didReceiveRemoteDataWithDecryptionInfo:(id)a0 noEncryptionHandler:(id /* block */)a1 createReadChannelForCryptoTranscodeBlock:(id /* block */)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (id)p_migrateToTemporaryDataStorageWithEncryptionInfo:(id)a0 updateInternalDataStorages:(BOOL)a1;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (id)dataStorageToUse;
- (BOOL)isLengthPrecise;
- (BOOL)p_copyPartiallyMaterializedDataToURL:(id)a0 encryptionInfo:(id)a1;
- (void)didReceiveRemoteData:(id)a0 decryptionInfo:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)didReceiveRemoteDataWithReadChannel:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)didReceivePartialRemoteData:(id)a0 decryptionKey:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (BOOL)materializeFromPartiallyDownloadedDocumentForData:(id)a0 withContentsOfURL:(id)a1 canMove:(BOOL)a2 error:(id *)a3;
- (unsigned long long)reservedLength;

@end
