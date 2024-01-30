@class NSMutableDictionary, NSString, NSData, SFUDataRepresentation, SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation, SFUZipArchiveDelegate;

@interface SFUZipArchive : NSObject {
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

@property (nonatomic) id<SFUZipArchiveDelegate> delegate;

+ (BOOL)isZipArchiveAtPath:(id)a0;

- (BOOL)isEncrypted;
- (void)dealloc;
- (void)setCryptoKey:(id)a0;
- (id)entryWithName:(id)a0;
- (void)collapseCommonRootDirectory;
- (void)readEntries;
- (id)allEntryNames;
- (id)initWithPath:(id)a0 collapseCommonRootDirectory:(BOOL)a1;
- (id)initWithData:(id)a0 collapseCommonRootDirectory:(BOOL)a1;
- (id)entryWithName:(id)a0 dataLength:(long long)a1;
- (id)passphraseVerifier;
- (id)passphraseHint;
- (id)encryptedDocumentUuid;
- (BOOL)decompressAtPath:(id)a0;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readEndOfCentralDirectoryFromInputStream:(id)a0;
- (id)readFilenameFromBuffer:(const char *)a0 size:(unsigned long long)a1;
- (void)readExtraFieldFromBuffer:(const char *)a0 size:(unsigned long long)a1 entry:(id)a2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)a0 offset:(long long *)a1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readZip64EndOfCentralDirectoryFromInputStream:(id)a0 eocdOffset:(long long)a1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readZip64EndOfCentralDirectoryFromInputStream:(id)a0 offset:(long long)a1;

@end
