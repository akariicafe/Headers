@class NSString;

@interface SFUZipOutputEntry : NSObject {
    NSString *name;
    unsigned long long utf8NameLength;
    BOOL isCompressed;
    BOOL isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    BOOL isWrittenDirectlyToFile;
    BOOL is64Bit;
}

- (id)description;
- (void)dealloc;
- (long long)compareByOffset:(id)a0;

@end
