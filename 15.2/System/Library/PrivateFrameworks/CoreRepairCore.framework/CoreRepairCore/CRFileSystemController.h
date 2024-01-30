@class NSString;

@interface CRFileSystemController : NSObject {
    NSString *tmpFDRDataPathStr;
    NSString *fdrDataPathStr;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (BOOL)_mountBindFSFrom:(const char *)a0 To:(const char *)a1 withFlag:(int)a2;
- (id)setupFileSystemForRepair;
- (long long)commitToFileSystem;

@end
