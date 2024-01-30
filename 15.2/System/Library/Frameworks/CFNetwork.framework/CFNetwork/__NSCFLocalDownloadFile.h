@class NSString, NSObject;
@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;

@interface __NSCFLocalDownloadFile : NSObject {
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } _stat;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _finished;
    BOOL _createdPlaceholder;
    BOOL _skipUnlink;
    BOOL _truncateFile;
    int _error;
    id<__NSCFLocalDownloadFileOpener> _fileProvider;
    id /* block */ _finishCompletion;
    NSString *_protectionType;
}

@property (retain) NSString *path;

- (void)dealloc;

@end
