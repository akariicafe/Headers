@class NSString, LiveFSAppleDoubleManager, NSMutableData, NSObject;
@protocol OS_dispatch_semaphore;

@interface LiveFSAppleDouble : NSObject {
    int _pid;
    BOOL _weCreatedFile;
    unsigned long long _baseFileID;
    struct _LIFileAttributes { unsigned long long __fa_rsvd0; unsigned long long fa_validmask; unsigned int fa_type; unsigned int fa_mode; unsigned int fa_nlink; unsigned int fa_uid; unsigned int fa_gid; unsigned int fa_bsd_flags; unsigned long long fa_size; unsigned long long fa_allocsize; unsigned long long fa_fileid; unsigned long long fa_parentid; struct timespec { long long tv_sec; long long tv_nsec; } fa_atime; struct timespec { long long tv_sec; long long tv_nsec; } fa_mtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_ctime; struct timespec { long long tv_sec; long long tv_nsec; } fa_birthtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_backuptime; struct timespec { long long tv_sec; long long tv_nsec; } fa_addedtime; } _ADFileAttributes;
    NSMutableData *_ADHeaderBuffer;
    unsigned long long _ADBufferHeaderBytesValid;
    unsigned long long _IOSize;
    BOOL _ADFileOpen;
    BOOL _ADFileOK;
    char *_rawAD;
    struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } *_filehdr;
    struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } *_finderinfo;
    struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } *_rsrcfork;
    struct attr_header { struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[3]; unsigned short x7; unsigned short x8; } *_attrhdr;
    struct attr_entry { unsigned int x0; unsigned int x1; unsigned short x2; unsigned char x3; unsigned char x4[1]; } *_attr_entry;
    BOOL _emptyfinderinfo;
    BOOL _readonly;
    BOOL _lookupFailed;
}

@property (retain) LiveFSAppleDoubleManager *manager;
@property (retain) NSString *parentDirHandle;
@property (retain) NSString *baseFileHandle;
@property (retain) NSString *fileName;
@property (retain) NSString *fileHandle;
@property (retain) NSObject<OS_dispatch_semaphore> *syncSem;
@property (readonly) int purpose;

- (int)closeFile;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithManager:(id)a0 baseFileHandle:(id)a1 name:(id)a2 andDirectoryHandle:(id)a3 andPID:(int)a4 andPurpose:(int)a5;
- (int)openFile;
- (int)loadADHeader;
- (int)lookupFile;
- (int)createFile;
- (void)swapFileHeader:(struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } *)a0;
- (void)swapAttrHeader:(struct attr_header { struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[3]; unsigned short x7; unsigned short x8; } *)a0;
- (void)shiftDataDownAtOffset:(unsigned int)a0 lengh:(unsigned int)a1 howMuch:(unsigned long long)a2;
- (void)initEmptyResourceFork:(struct rsrcfork_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4[112]; unsigned char x5[128]; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; } *)a0;
- (void)loadAttrHeader;
- (int)removeXattrNamed:(id)a0;
- (int)writeXattrInfo;
- (void)shiftDataUp:(long long)a0 length:(unsigned long long)a1 howMuch:(unsigned long long)a2;
- (BOOL)containerFileExists;
- (id)valueForXattrNamed:(id)a0 posixError:(int *)a1;
- (int)setValue:(id)a0 forXattrNamed:(id)a1 how:(int)a2;
- (id)allXattrNamesAndPosixError:(int *)a0;
- (int)removeFile;
- (int)renameFileToDirectory:(id)a0 andName:(id)a1;
- (int)linkFileToDirectory:(id)a0 andName:(id)a1;

@end
