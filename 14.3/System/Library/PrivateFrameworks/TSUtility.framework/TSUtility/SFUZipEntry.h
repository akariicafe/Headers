@class SFUCryptoKey, SFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipEntry : SFUDataRepresentation {
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    BOOL mHasDataOffset;
    unsigned long long mEncodedLength;
    BOOL mHasEncodedLength;
    SFUCryptoKey *mCryptoKey;
}

- (long long)dataLength;
- (void)setDataLength:(long long)a0;
- (unsigned int)crc;
- (id)data;
- (void)dealloc;
- (void)setCryptoKey:(id)a0;
- (BOOL)isReadable;
- (BOOL)isCompressed;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (id)inputStream;
- (unsigned long long)dataOffset;
- (BOOL)hasSameLocationAs:(id)a0;
- (void)copyToFile:(id)a0;
- (id)initFromCentralFileHeader:(const char *)a0 dataRepresentation:(id)a1;
- (void)readZip64ExtraField:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithDataRepresentation:(id)a0 compressionMethod:(int)a1 compressedSize:(unsigned long long)a2 uncompressedSize:(unsigned long long)a3 offset:(unsigned long long)a4 crc:(unsigned int)a5;
- (void)setCompressionFlags:(unsigned short)a0;
- (unsigned long long)calculateEncodedLength;
- (BOOL)isBackedByFile;
- (id)backingFilePath;
- (unsigned long long)backingFileDataOffset;

@end
