@class NSString, NSDictionary, NSData, NSArray, NSMutableDictionary;

@interface VFXNSZipFileArchive : NSObject {
    NSDictionary *_contents;
    NSData *_data;
    id _provider;
    long long _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    void *_reserved;
    struct __zFlags { unsigned char providerSuppliesContents : 1; unsigned char providerSuppliesStreams : 1; unsigned char providerSuppliesProperties : 1; unsigned char noContentsCaching : 1; unsigned char fileOpen : 1; unsigned int reserved : 27; } _zFlags;
    void *_reserved2[5];
}

- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)archiveData;
- (BOOL)isValid;
- (void)dealloc;
- (void)invalidate;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)archiveStream;
- (id)contentsForEntryName:(id)a0;
- (id)entryNames;
- (id)initWithEntryNames:(id)a0 contents:(id)a1 properties:(id)a2 options:(unsigned long long)a3;
- (id)initWithEntryNames:(id)a0 dataProvider:(id)a1 options:(unsigned long long)a2;
- (id)initWithPath:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)propertiesForEntryName:(id)a0;
- (id)streamForEntryName:(id)a0;
- (BOOL)writeContentsForEntryName:(id)a0 toFile:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
