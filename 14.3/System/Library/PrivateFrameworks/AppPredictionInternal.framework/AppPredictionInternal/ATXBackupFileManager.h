@class NSString;
@protocol ATXBackupDataProviderDelegate;

@interface ATXBackupFileManager : NSObject {
    struct backup_file_hdr_s { unsigned char backupId[16]; unsigned int chunkCount; } _hdr;
}

@property (weak, nonatomic) id<ATXBackupDataProviderDelegate> dataProviderDelegate;
@property (retain, nonatomic) NSString *backupDirectory;
@property (retain, nonatomic) NSString *deviceID;

- (BOOL)commit;
- (void).cxx_destruct;
- (BOOL)restoreFromBackup:(id)a0;
- (BOOL)compareBackupIDFromBackupWithPath:(id)a0 toMarkerWithPath:(id)a1;
- (id)writeBackupData:(id)a0 toPath:(id)a1;
- (BOOL)writeBackupFileForD2D;
- (BOOL)writeDeviceID:(id)a0;
- (struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)openBackupFileForWriting:(id)a0;
- (BOOL)writeBackupMarkers:(const char *)a0;
- (BOOL)isMobileBackupRestoreNeeded;
- (id)writeBackupFileForDeviceID:(id)a0 pareDown:(BOOL)a1;
- (BOOL)writeData:(id)a0 toPath:(id)a1;
- (id)pathForFile:(id)a0;
- (BOOL)isD2DRestoreNeeded;
- (BOOL)restoreFromMobileBackup;
- (BOOL)isRestoreNeeded;
- (id)readBackupData:(id)a0;
- (id)initWithBackupDirectory:(id)a0 dataProviderDelegate:(id)a1;
- (BOOL)writeChunk:(id)a0 withFilename:(id)a1 toBackupFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a2;
- (BOOL)restoreFromD2D;

@end
