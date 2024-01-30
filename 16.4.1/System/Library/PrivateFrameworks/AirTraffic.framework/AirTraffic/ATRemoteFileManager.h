@class ATMessageLink;

@interface ATRemoteFileManager : NSObject

@property (retain, nonatomic) ATMessageLink *messageLink;

- (void).cxx_destruct;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithMessageLink:(id)a0;
- (BOOL)removeItemAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_readStreamData:(id)a0 error:(id *)a1;
- (id)_sendRequest:(id)a0 error:(id *)a1;
- (id)contentsOfDirectoryAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)dataAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)downloadFileAtPath:(id)a0 toPath:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)downloadFilesAtPaths:(id)a0 options:(id)a1 results:(id *)a2 error:(id *)a3;
- (BOOL)freeSpace:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)moveItemsAtPaths:(id)a0 options:(id)a1 results:(id *)a2 error:(id *)a3;
- (void)progressUpdatedWithPercentage:(double)a0 size:(unsigned long long)a1;
- (BOOL)removeItemsAtPaths:(id)a0 options:(id)a1 results:(id *)a2 error:(id *)a3;
- (BOOL)uploadData:(id)a0 toPath:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)uploadFileAtPath:(id)a0 toPath:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)uploadFilesAtPaths:(id)a0 options:(id)a1 results:(id *)a2 error:(id *)a3;
- (BOOL)usageOfDirectoryAtPath:(id)a0 count:(unsigned long long *)a1 size:(unsigned long long *)a2 options:(id)a3 error:(id *)a4;

@end
