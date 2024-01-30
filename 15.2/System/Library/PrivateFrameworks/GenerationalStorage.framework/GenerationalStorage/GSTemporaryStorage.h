@class NSURL, NSObject;
@protocol OS_dispatch_queue, NSSecureCoding, NSCopying;

@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {
    NSURL *_stagingURL;
    int _lockFd;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) NSURL *libraryURL;
@property (retain) NSURL *documentURL;
@property (readonly, nonatomic) id<NSCopying, NSSecureCoding> persistentIdentifier;

- (id)enumeratorForAdditionsInNameSpace:(id)a0 withOptions:(unsigned long long)a1 withoutOptions:(unsigned long long)a2 ordering:(int)a3;
- (id)prepareAdditionCreationWithItemAtURL:(id)a0 byMoving:(BOOL)a1 creationInfo:(id)a2 error:(id *)a3;
- (void)createAdditionStagedAtURL:(id)a0 creationInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllAdditionsForNamespaces:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unlock;
- (void)finalize;
- (void)removeAdditions:(id)a0 completionHandler:(id /* block */)a1;
- (id)additionWithName:(id)a0 inNameSpace:(id)a1 error:(id *)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)cleanupStagingURL:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)a0 preservingCurrentVersionWithCreationInfo:(id)a1 createdAddition:(id *)a2 error:(id *)a3;
- (id)stagingURLforCreatingAdditionWithError:(id *)a0;
- (id)getAdditionDictionary:(id)a0 error:(id *)a1;
- (BOOL)setAdditionOptions:(id)a0 value:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setAdditionDisplayName:(id)a0 value:(id)a1 error:(id *)a2;
- (id)setAdditionNameSpace:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)mergeAdditionUserInfo:(id)a0 value:(id)a1 error:(id *)a2;
- (id)URLforReplacingItemWithError:(id *)a0;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)a0 preservingCurrentVersionWithCreationInfo:(id)a1 createdAddition:(id *)a2 error:(id *)a3;
- (id)additionsWithNames:(id)a0 inNameSpace:(id)a1 error:(id *)a2;
- (id)initWithLibraryURL:(id)a0 forItemAtURL:(id)a1 error:(id *)a2;
- (id)_URLForNameSpace:(id)a0 createIfNeeded:(BOOL)a1 allowMissing:(BOOL)a2 error:(id *)a3;
- (BOOL)__lockWithFlags:(int)a0 error:(id *)a1;
- (BOOL)_readLock:(id *)a0;
- (BOOL)_writeLock:(id *)a0;
- (id)_enumerateItemsAtURL:(id)a0;
- (void)_protectPath:(id)a0;
- (void)_unprotectPath:(id)a0;

@end
