@class NSString;

@interface CRKFTSEnumeration : NSObject {
    NSString *mDirectoryPath;
    int mOptions;
}

+ (int)defaultOptions;

- (id)initWithDirectoryPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)closeFTS:(struct { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent **x2; int x3; char *x4; int x5; int x6; int x7; union { void /* function */ *x0; id /* block */ x1; } x8; int x9; } *)a0;
- (id)entriesWithError:(id *)a0;
- (id)initWithDirectoryPath:(id)a0 options:(int)a1;
- (struct { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent **x2; int x3; char *x4; int x5; int x6; int x7; union { void /* function */ *x0; id /* block */ x1; } x8; int x9; } *)makeFTSWithError:(id *)a0;
- (id)readAllEntriesFromFTS:(struct { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent **x2; int x3; char *x4; int x5; int x6; int x7; union { void /* function */ *x0; id /* block */ x1; } x8; int x9; } *)a0 error:(id *)a1;
- (id)readNextEntryFromFTS:(struct { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent **x2; int x3; char *x4; int x5; int x6; int x7; union { void /* function */ *x0; id /* block */ x1; } x8; int x9; } *)a0 error:(id *)a1;
- (BOOL)shouldSkipEntry:(struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *)a0;

@end
