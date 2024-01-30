@class NSObject;
@protocol OS_dispatch_queue;

@interface QLDiskStore : NSObject {
    NSObject<OS_dispatch_queue> *_afterInit;
}

@property unsigned char disableQuickLook;
@property unsigned char disableCache;
@property (nonatomic) BOOL isExternalEncrypted;
@property struct statfs { unsigned int f_bsize; int f_iosize; unsigned long long f_blocks; unsigned long long f_bfree; unsigned long long f_bavail; unsigned long long f_files; unsigned long long f_ffree; struct fsid { int val[2]; } f_fsid; unsigned int f_owner; unsigned int f_type; unsigned int f_flags; unsigned int f_fssubtype; char f_fstypename[16]; char f_mntonname[1024]; char f_mntfromname[1024]; unsigned int f_flags_ext; unsigned int f_reserved[7]; } fs_stat;
@property (readonly) BOOL acceptsThumbnails;
@property (readonly) BOOL hasThumbnailCache;
@property (readonly) BOOL distant;
@property (readonly) BOOL encrypted;
@property (readonly) unsigned long long availableDiskSpace;
@property (readonly) const char *mountPath;

+ (id)diskStoreForURL:(id)a0;
+ (id)diskStores;

- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)executeBlock:(id /* block */)a0 onQueue:(id)a1;

@end
