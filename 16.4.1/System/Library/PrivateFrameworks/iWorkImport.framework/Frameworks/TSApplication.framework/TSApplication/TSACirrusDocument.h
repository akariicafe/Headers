@class NSUUID, NSString, TSPObjectContext, NSURL, TSUTemporaryDirectory, NSDictionary, SFUCryptoKey, TSADocumentRoot, TSPDocumentLoadValidationPolicy, TSPDocumentSaveValidationPolicy;
@protocol NSFilePresenter;

@interface TSACirrusDocument : NSObject <TSPObjectContextDelegate> {
    BOOL _isClosed;
    TSUTemporaryDirectory *_tempDirForSupport;
    TSUTemporaryDirectory *_tempDirForCache;
}

@property (retain, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSString *documentPasswordHint;
@property (copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) BOOL skipDocumentUpgrade;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)name;
- (id)logContext;
- (void)documentDidLoad;
- (id)documentCachePath;
- (void)presentPersistenceError:(id)a0;
- (id)supportDirectoryURL;
- (id)initWithURL:(id)a0 registry:(id)a1 error:(id *)a2 passphrase:(id)a3;
- (id)tskDocumentInfo;
- (id)documentPasswordHintForWrite;

@end
