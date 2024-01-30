@class NSString, NSMutableSet;

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {
    NSString *_destinationPath;
    NSMutableSet *_skippedPaths;
    unsigned long long _options;
}

+ (id)filesystemItemCopyOperationWithSourcePath:(id)a0 destinationPath:(id)a1 options:(unsigned long long)a2;
+ (id)_errorWithErrno:(int)a0 sourcePath:(id)a1 destinationPath:(id)a2;

- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *)a0;
- (BOOL)_validatePaths:(id *)a0;
- (BOOL)shouldCopyItemAtPath:(id)a0 toPath:(id)a1;
- (BOOL)_shouldProceedAfterErrno:(int)a0 copyingItemAtPath:(const char *)a1 toPath:(const char *)a2;
- (BOOL)shouldProceedAfterError:(id)a0 copyingItemAtPath:(id)a1 toPath:(id)a2;
- (BOOL)_shouldCopyItemAtPath:(const char *)a0 toPath:(const char *)a1;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1 options:(unsigned long long)a2;
- (void)dealloc;

@end
