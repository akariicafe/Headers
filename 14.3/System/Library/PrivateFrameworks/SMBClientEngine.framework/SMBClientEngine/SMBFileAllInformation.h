@class NSString;

@interface SMBFileAllInformation : NSObject

@property struct smbfattr { unsigned long long fa_valid_mask; unsigned int fa_attr; unsigned long long fa_size; unsigned long long fa_data_alloc; struct timespec { long long tv_sec; long long tv_nsec; } fa_atime; struct timespec { long long tv_sec; long long tv_nsec; } fa_chtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_mtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_crtime; unsigned long long fa_ino; struct timespec { long long tv_sec; long long tv_nsec; } fa_reqtime; int fa_vtype; unsigned long long fa_uid; unsigned long long fa_gid; unsigned long long fa_permissions; unsigned long long fa_nlinks; unsigned int fa_flags_mask; unsigned int fa_unix; unsigned int fa_reparse_tag; unsigned short fa_fstatus; unsigned int fa_created_disp; unsigned long long fa_rsrc_size; unsigned long long fa_rsrc_alloc; unsigned char fa_finder_info[32]; unsigned int fa_max_access; } attributes;
@property (copy) NSString *name;

- (void).cxx_destruct;

@end
