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
- (void)collapseCommonRootDirectory;
- (id)entryWithName:(id)a0;
- (id)allEntryNames;
- (BOOL)decompressAtPath:(id)a0;
- (id)encryptedDocumentUuid;
- (id)entryWithName:(id)a0 dataLength:(long long)a1;
- (id)initWithData:(id)a0 collapseCommonRootDirectory:(BOOL)a1;
- (id)initWithPath:(id)a0 collapseCommonRootDirectory:(BOOL)a1;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readEndOfCentralDirectoryFromInputStream:(id)a0;
- (void)readEntries;
- (void)readExtraFieldFromBuffer:(const char *)a0 size:(unsigned long long)a1 entry:(id)a2;
- (id)readFilenameFromBuffer:(const char *)a0 size:(unsigned long long)a1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readZip64EndOfCentralDirectoryFromInputStream:(id)a0 eocdOffset:(long long)a1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x0; long long x1; long long x2; })readZip64EndOfCentralDirectoryFromInputStream:(id)a0 offset:(long long)a1;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)a0 offset:(long long *)a1;

@end
