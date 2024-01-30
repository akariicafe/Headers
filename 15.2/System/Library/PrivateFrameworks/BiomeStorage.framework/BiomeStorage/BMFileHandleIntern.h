@class NSMapTable;

@interface BMFileHandleIntern : NSObject {
    NSMapTable *_fhCache;
}

+ (id)sharedInstance;

- (id)openFileWithAttributes:(id)a0 createNewFile:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)fileHandleForFilePath:(id)a0 permissions:(unsigned long long)a1 protectionClass:(unsigned long long)a2 createIfNotCached:(BOOL)a3 createNewFile:(BOOL)a4 error:(id *)a5;

@end
