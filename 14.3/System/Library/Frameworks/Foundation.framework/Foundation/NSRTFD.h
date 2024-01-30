@class NSMutableDictionary;

@interface NSRTFD : NSMutableDictionary {
    NSMutableDictionary *dict;
}

+ (void)initialize;

- (id)setPackage:(BOOL)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 markBusy:(BOOL)a4 hardLinkPath:(id)a5;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)addFile:(id)a0;
- (id)addLink:(id)a0;
- (BOOL)_isLink:(id)a0;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 hardLinkPath:(id)a4;
- (unsigned long long)internalWritePath:(id)a0 errorHandler:(id)a1 remapContents:(BOOL)a2 hardLinkPath:(id)a3;
- (unsigned long long)internalSaveTo:(id)a0 removeBackup:(BOOL)a1 errorHandler:(id)a2 temp:(id)a3 backup:(id)a4;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (BOOL)isPackage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)internalSaveTo:(id)a0 removeBackup:(BOOL)a1 errorHandler:(id)a2;
- (unsigned long long)saveToDocument:(id)a0 removeBackup:(BOOL)a1 errorHandler:(id)a2;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (void)dealloc;
- (id)uniqueKey:(id)a0;
- (id)copy:(id)a0 into:(id)a1;
- (unsigned long long)insertItem:(id)a0 path:(id)a1 dirInfo:(id)a2 zone:(struct _NSZone { } *)a3 plist:(id)a4;
- (id)initWithPasteboardDataRepresentation:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)getDirInfo:(BOOL)a0;
- (id)removeFile:(id)a0;
- (id)copy;
- (id)initWithDataRepresentation:(id)a0;
- (id)dataForFile:(id)a0;
- (unsigned long long)initUnixFile:(id)a0;
- (id)addData:(id)a0 name:(id)a1;
- (id)initFromElement:(id)a0 ofDocument:(id)a1;
- (unsigned long long)addFileNamed:(id)a0 fileAttributes:(id)a1;
- (id)addCommon:(id)a0 docInfo:(id)a1 value:(id)a2 zone:(struct _NSZone { } *)a3;
- (id)pasteboardDataRepresentation;
- (id)getDocument:(id)a0 docInfo:(id)a1;
- (long long)validatePath:(id)a0 ignore:(id)a1;
- (id)freeSerialized:(void *)a0 length:(unsigned long long)a1;
- (id)initFromDocument:(id)a0 error:(unsigned long long *)a1;
- (id)tmpNameFromPath:(id)a0 extension:(id)a1;
- (id)createRandomKey:(id)a0;
- (id)createUniqueKey:(id)a0;
- (id)tmpNameFromPath:(id)a0;
- (unsigned long long)realAddDirNamed:(id)a0;
- (unsigned long long)addDirNamed:(id)a0 lazy:(BOOL)a1;
- (id)replaceFile:(id)a0 path:(id)a1;
- (id)replaceFile:(id)a0 data:(id)a1;
- (id)serialize:(void **)a0 length:(unsigned long long *)a1;
- (id)nameFromPath:(id)a0 extra:(id)a1;
- (id)initFromSerialized:(id)a0;
- (unsigned long long)count;
- (id)_getDocInfoForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dataRepresentation;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;

@end
