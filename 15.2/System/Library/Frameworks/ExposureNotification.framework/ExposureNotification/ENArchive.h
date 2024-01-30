@class NSString;

@interface ENArchive : NSObject {
    struct archive { } *_archive;
    struct archive_entry { } *_entry;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fileHandle;
}

@property (readonly, nonatomic) BOOL endOfArchive;
@property (readonly, copy, nonatomic) NSString *entryPath;
@property (readonly, nonatomic) unsigned short entryFileType;

- (void)close;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (void)_closeArchive;
- (void)dealloc;
- (BOOL)resetToCurrentEntryAndReturnError:(id *)a0;
- (BOOL)readDataIntoBuffer:(void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (long long)readDataIntoBuffer:(void *)a0 maxLength:(unsigned long long)a1 error:(id *)a2;
- (id)initWithFD:(int)a0 error:(id *)a1;
- (BOOL)_openArchiveAndReturnError:(id *)a0;
- (BOOL)_checkEntryAndReturnError:(id *)a0;
- (BOOL)resetAndReturnError:(id *)a0;
- (BOOL)advanceEntryAndReturnError:(id *)a0;
- (BOOL)skipBytes:(unsigned long long)a0 error:(id *)a1;

@end
