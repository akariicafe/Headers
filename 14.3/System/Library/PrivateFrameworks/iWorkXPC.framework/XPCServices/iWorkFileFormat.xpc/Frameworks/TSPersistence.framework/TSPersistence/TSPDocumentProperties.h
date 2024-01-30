@class NSUUID, TSPDocumentRevision, NSDictionary;

@interface TSPDocumentProperties : NSObject <NSCopying> {
    NSUUID *_shareUUID;
    NSUUID *_versionUUID;
}

@property (copy, nonatomic) NSUUID *documentUUID;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (copy, nonatomic) TSPDocumentRevision *revision;
@property (copy, nonatomic) NSDictionary *additionalProperties;
@property (readonly, nonatomic) NSUUID *versionUUID;
@property (readonly, nonatomic) NSUUID *shareUUID;

+ (id)keychainGenericItemForDocumentUUID:(id)a0;
+ (id)documentPropertiesRelativePath;
+ (id)shareIdentifierRelativePath;
+ (id)documentRevisionAtURL:(id)a0;
+ (id)documentUUIDAtURL:(id)a0;
+ (BOOL)documentIsEncryptedAtURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)updateVersionUUID;
- (void)updateDocumentAndShareUUID;
- (BOOL)writeToPackageWriter:(id)a0 error:(id *)a1;
- (void)updateDocumentUUID;
- (id)initWithDocumentURL:(id)a0 allowMissingPropertyList:(BOOL)a1 error:(id *)a2;
- (id)initWithDocumentURL:(id)a0 error:(id *)a1;
- (BOOL)writeToDocumentBundleURL:(id)a0 error:(id *)a1;
- (id)initWithDocumentBundleURL:(id)a0 allowMissingPropertyList:(BOOL)a1 error:(id *)a2;
- (id)initWithDocumentFileURL:(id)a0 allowMissingPropertyList:(BOOL)a1 error:(id *)a2;
- (void)readDocumentPropertiesFromDictionary:(id)a0;
- (id)initWithFilePackageURL:(id)a0 zipArchive:(id)a1 allowMissingPropertyList:(BOOL)a2 error:(id *)a3;
- (id)UUIDFromDocumentProperties:(id)a0 key:(id)a1;
- (id)encodedPropertyListWithError:(id *)a0;
- (BOOL)writeToDocumentURL:(id)a0 writerBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithPropertiesURL:(id)a0 error:(id *)a1;
- (BOOL)writeToPropertiesURL:(id)a0 error:(id *)a1;

@end
