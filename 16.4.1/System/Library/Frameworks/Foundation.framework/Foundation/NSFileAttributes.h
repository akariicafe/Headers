@class NSDictionary, NSMutableDictionary, NSDate;

@interface NSFileAttributes : NSDictionary {
    NSMutableDictionary *dict;
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } statInfo;
    struct { BOOL extensionHidden; NSDate *creationDate; struct _fields { unsigned char extensionHidden : 1; unsigned char creationDate : 1; unsigned int reserved : 30; } validFields; } catInfo;
    NSDictionary *extendedAttrs;
    int fileProtectionClass;
}

+ (BOOL)_populateCatInfo:(struct { BOOL x0; id x1; struct _fields { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; } x2; } *)a0 forURL:(id)a1 statInfo:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a2 error:(id *)a3;
+ (id)attributesAtPath:(id)a0 traverseLink:(BOOL)a1;
+ (id)_attributesAtPath:(id)a0 partialReturn:(BOOL)a1 filterResourceFork:(BOOL)a2 error:(id *)a3;
+ (id)_attributesAtURL:(id)a0 partialReturn:(BOOL)a1 filterResourceFork:(BOOL)a2 error:(id *)a3;
+ (id)attributesWithStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a0;

- (id)fileType;
- (unsigned long long)fileSize;
- (id)fileGroupOwnerAccountName;
- (BOOL)isDirectory;
- (id)fileModificationDate;
- (id)objectForKey:(id)a0;
- (id)fileOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)count;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)keyEnumerator;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)filePosixPermissions;

@end
