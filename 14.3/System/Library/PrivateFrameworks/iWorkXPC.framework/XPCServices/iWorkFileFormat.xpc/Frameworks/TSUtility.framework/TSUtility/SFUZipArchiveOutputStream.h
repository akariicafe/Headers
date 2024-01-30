@class SFUMoveableFileOutputStream, NSString, SFUCryptoKey, NSData, SFUZipOutputEntry, NSMutableArray, SFUZipFreeSpaceEntry;
@protocol SFUOutputStream;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
    SFUMoveableFileOutputStream *mOutputStream;
    SFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    SFUZipOutputEntry *mCurrentEntry;
    SFUZipOutputEntry *mLastEntryInFile;
    id<SFUOutputStream> mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    SFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)a0;
+ (BOOL)createZipWithItemsAtPath:(id)a0 zippedPath:(id)a1 rootPathComponentName:(id)a2;

- (id)initWithPath:(id)a0;
- (void)close;
- (void)reset;
- (void)dealloc;
- (void)flush;
- (void)moveToPath:(id)a0;
- (void)finishEntry;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)a0;
- (id)entryNames;
- (void)removeEntryWithName:(id)a0;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithPath:(id)a0 cryptoKey:(id)a1 passphraseHint:(id)a2;
- (id)initWithOutputStream:(id)a0 cryptoKey:(id)a1 passphraseHint:(id)a2;
- (void)beginEntryWithName:(id)a0 isCompressed:(BOOL)a1 uncompressedSize:(unsigned long long)a2;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)a0;
- (void)beginUnknownSizeEntryWithName:(id)a0 isCompressed:(BOOL)a1;
- (void)writeCentralFileHeaderUsingEntry:(id)a0 isFirstEntry:(BOOL)a1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)a0;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)a0;
- (void)setCrc32ForCurrentEntry:(unsigned int)a0;
- (BOOL)canRemoveEntryWithName:(id)a0;
- (void)setEncryptedDocumentUuid:(id)a0;
- (id)entriesAtPath:(id)a0;
- (unsigned long long)freeBytes;
- (unsigned int)crc32ForEntry:(id)a0;
- (void)coalesceAndTruncateFreeSpace;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)a0;

@end
