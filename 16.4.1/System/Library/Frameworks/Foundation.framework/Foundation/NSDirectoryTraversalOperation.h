@class NSString, NSError, NSMutableArray;

@interface NSDirectoryTraversalOperation : NSOperation {
    id _delegate;
    NSString *_sourcePath;
    NSError *_error;
    void *_stream;
    int _optionsFlags;
    int _lastDeviceInode;
    BOOL _shouldFilterUnderbars;
    BOOL _stopped;
    NSMutableArray *_deviceEntryPoints;
    NSMutableArray *_deviceNumbers;
}

+ (id)_errorWithErrno:(int)a0 atPath:(id)a1;
+ (BOOL)_needsStatInfo;
+ (id)directoryTraversalOperationAtPath:(id)a0;

- (id)delegate;
- (id)initWithPath:(id)a0;
- (void)main;
- (BOOL)_validatePaths:(id *)a0;
- (BOOL)shouldProceedAfterError:(id)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)handlePathname:(id)a0;
- (id)error;
- (BOOL)_shouldFilterEntry:(struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *)a0;
- (void)_setError:(id)a0;
- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *)a0;

@end
