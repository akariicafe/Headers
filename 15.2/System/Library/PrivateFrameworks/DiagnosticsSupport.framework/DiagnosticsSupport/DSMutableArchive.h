@class NSMutableData, NSMutableArray;

@interface DSMutableArchive : NSObject

@property (retain, nonatomic) NSMutableData *dataBuffer;
@property (retain, nonatomic) NSMutableArray *tableOfContents;
@property (nonatomic) long long format;

+ (id)archive;
+ (BOOL)extractEntry:(struct archive { } *)a0 toArchive:(struct archive { } *)a1;
+ (BOOL)extractArchive:(id)a0 toDirectory:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (BOOL)addURL:(id)a0 prefix:(id)a1 error:(id *)a2;
- (BOOL)addURL:(id)a0 prefix:(id)a1 flatten:(BOOL)a2 error:(id *)a3;
- (BOOL)_addPathToContents:(id)a0 searchQueue:(id)a1 flatten:(BOOL)a2 error:(id *)a3;
- (BOOL)_addDirectoryToContents:(id)a0 searchQueue:(id)a1 flatten:(BOOL)a2 error:(id *)a3;
- (BOOL)_addFile:(id)a0 archive:(struct archive { } *)a1 error:(id *)a2;
- (void)_setFormatOnArchive:(struct archive { } *)a0;
- (BOOL)_writeArchive:(struct archive { } *)a0 error:(id *)a1;
- (id)archiveAsTempFileWithTemplate:(id)a0 suffix:(id)a1 error:(id *)a2;
- (id)archiveAsTempFileWithTemplate:(id)a0 directory:(id)a1 suffix:(id)a2 error:(id *)a3;
- (BOOL)archiveAsFileUsingDescriptor:(int)a0 error:(id *)a1;
- (BOOL)addURL:(id)a0 error:(id *)a1;
- (id)archiveAsDataWithError:(id *)a0;
- (id)archiveAsTempDirectoryWithName:(id)a0 error:(id *)a1;
- (id)archiveAsTempFileWithTemplate:(id)a0 error:(id *)a1;
- (BOOL)archiveAsFile:(id)a0 error:(id *)a1;

@end
