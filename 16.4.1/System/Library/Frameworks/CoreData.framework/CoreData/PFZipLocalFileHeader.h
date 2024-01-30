@class NSString, NSData;

@interface PFZipLocalFileHeader : NSObject {
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    NSString *_filename;
    NSData *_extraFieldData;
}

- (void)dealloc;
- (id)init;
- (id)description;

@end
