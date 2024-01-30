@class NSData, GSDocumentIdentifier, GSStagingPrefix, NSURL;

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {
    unsigned long long _remoteID;
    NSData *_pubExtension;
    NSData *_privExtension;
    long long _pubHandle;
    long long _privHandle;
}

@property (readonly, nonatomic) long long remoteID;
@property (retain, nonatomic) GSStagingPrefix *stagingPrefix;
@property (retain) NSData *pubExtension;
@property (retain) NSData *privExtension;
@property (readonly, nonatomic) GSDocumentIdentifier *documentID;
@property (readonly, nonatomic) unsigned long long storageID;
@property (retain) NSURL *documentURL;
@property (readonly, nonatomic) GSDocumentIdentifier *persistentIdentifier;

+ (id)storagePrefixForFileDescriptor:(int)a0 error:(id *)a1;
+ (id)storageIDForItemAtURL:(id)a0 error:(id *)a1;

- (id)enumeratorForAdditionsInNameSpace:(id)a0 withOptions:(unsigned long long)a1 withoutOptions:(unsigned long long)a2 ordering:(int)a3;
- (id)prepareAdditionCreationWithItemAtURL:(id)a0 byMoving:(BOOL)a1 creationInfo:(id)a2 error:(id *)a3;
- (void)createAdditionStagedAtURL:(id)a0 creationInfo:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllAdditionsForNamespaces:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)removeAdditions:(id)a0 completionHandler:(id /* block */)a1;
- (id)additionWithName:(id)a0 inNameSpace:(id)a1 error:(id *)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_invalidate;
- (void)finalize;
- (void)cleanupStagingURL:(id)a0;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)a0 preservingCurrentVersionWithCreationInfo:(id)a1 createdAddition:(id *)a2 error:(id *)a3;
- (id)stagingURLforCreatingAdditionWithError:(id *)a0;
- (id)getAdditionDictionary:(id)a0 error:(id *)a1;
- (BOOL)setAdditionOptions:(id)a0 value:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setAdditionDisplayName:(id)a0 value:(id)a1 error:(id *)a2;
- (id)setAdditionNameSpace:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)mergeAdditionUserInfo:(id)a0 value:(id)a1 error:(id *)a2;
- (void)_connectionWithDaemonWasLost;
- (id)URLforReplacingItemWithError:(id *)a0;
- (BOOL)_refreshRemoteIDWithFileDescriptor:(int)a0 error:(id *)a1;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)a0 preservingCurrentVersionWithCreationInfo:(id)a1 createdAddition:(id *)a2 error:(id *)a3;
- (id)additionsWithNames:(id)a0 inNameSpace:(id)a1 error:(id *)a2;
- (id)initWithFileDescriptor:(int)a0 documentID:(id)a1 forItemAtURL:(id)a2 error:(id *)a3;
- (BOOL)transferToItemAtURL:(id)a0 error:(id *)a1;

@end
