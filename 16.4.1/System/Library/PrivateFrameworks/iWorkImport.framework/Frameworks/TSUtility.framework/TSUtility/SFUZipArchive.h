@class NSMutableDictionary, NSString, NSData, SFUDataRepresentation, SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipArchive : NSObject {
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (BOOL)isZipArchiveAtPath:(id)a0;

- (BOOL)isEncrypted;
- (void)dealloc;
- (void)setCryptoKey:(id)a0;
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
- (void)collapseCommonRootDirectoryIgnoreCase:(BOOL)a0;
- (id)commonRootDirectoryIgnoringCase:(BOOL)a0;
- (BOOL)decompressAtPath:(id)a0 wasEmpty:(BOOL *)a1;
- (id)initWithData:(id)a0 collapseCommonRootDirectory:(BOOL)a1 ignoreCase:(BOOL)a2;
- (id)initWithPath:(id)a0 collapseCommonRootDirectory:(BOOL)a1 ignoreCase:(BOOL)a2;

@end
