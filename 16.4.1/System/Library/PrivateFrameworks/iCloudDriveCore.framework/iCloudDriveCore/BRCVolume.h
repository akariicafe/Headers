@class NSString;

@interface BRCVolume : NSObject {
    struct statfs { unsigned int f_bsize; int f_iosize; unsigned long long f_blocks; unsigned long long f_bfree; unsigned long long f_bavail; unsigned long long f_files; unsigned long long f_ffree; struct fsid { int val[2]; } f_fsid; unsigned int f_owner; unsigned int f_type; unsigned int f_flags; unsigned int f_fssubtype; char f_fstypename[16]; char f_mntonname[1024]; char f_mntfromname[1024]; unsigned int f_flags_ext; unsigned int f_reserved[7]; } _stfs;
}

@property (readonly, nonatomic) int deviceID;
@property (readonly, nonatomic) NSString *mountPath;
@property (readonly, nonatomic) NSString *fsTypeName;

- (int)_setUpForStatfs:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; })a0;
- (BOOL)setUpForSession:(id)a0 error:(id *)a1;

@end
