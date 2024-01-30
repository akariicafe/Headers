@class NSData, NSString, NSDate;

@interface NSPageData : NSData {
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (void)initialize;
+ (long long)_umask;

- (const void *)bytes;
- (unsigned long long)length;
- (unsigned long long)writeFd:(long long)a0;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 hardLinkPath:(id)a4;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfMappedFile:(id)a0 withFileAttributes:(id)a1;
- (id)data;
- (void)_setOriginalFileInfoFromFileAttributes:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (unsigned long long)writeFile:(id)a0;
- (id)initFromSerializerStream:(id)a0 length:(unsigned long long)a1;
- (id)_mappedFile;
- (id)deserializer;
- (id)initWithDataNoCopy:(id)a0;
- (id)initWithContentsOfMappedFile:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;

@end
