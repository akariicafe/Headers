@class ENFile, ENArchive, NSData, NSObject;
@protocol OS_xpc_object, OS_os_transaction;

@interface ENFileSessionDaemon : NSObject {
    ENArchive *_archive;
    NSObject<OS_xpc_object> *_nextTEKBatch;
    NSData *_signatureData;
    NSObject<OS_os_transaction> *_transaction;
}

@property (nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) ENFile *file;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned long long invalidKeyCount;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)_createTransaction;
- (id)readTEKBatchAndReturnError:(id *)a0;
- (BOOL)activateWithArchiveFD:(int)a0 error:(id *)a1;
- (BOOL)activateWithFileFD:(int)a0 signatureData:(id)a1 error:(id *)a2;
- (id)readSignaturesAndReturnError:(id *)a0;
- (void)prepareNextTEKBatchIfNecessary;
- (BOOL)_advanceArchive:(id)a0 toPathWithExtension:(id)a1 error:(id *)a2;
- (id)_readTEKBatchAndReturnError:(id *)a0;

@end
