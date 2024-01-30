@class NSString;

@interface SMBShare : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } statfs_lock;
}

@property unsigned int tree_id;
@property unsigned int share_type;
@property unsigned int share_capabilities;
@property unsigned int share_flags;
@property unsigned int share_max_access;
@property (retain) NSString *sharename;
@property unsigned long long total_alloc_units;
@property unsigned long long avail_alloc_units;
@property unsigned int sectors_per_alloc_unit;
@property unsigned int bytes_per_sector;
@property unsigned int fs_block_size;
@property unsigned long long fs_iosize;
@property unsigned long long fs_blocks;
@property unsigned long long fs_blocks_free;
@property unsigned long long fs_blocks_avail;
@property unsigned long long fs_files;
@property unsigned long long fs_files_free;
@property unsigned int file_system_attrs;
@property unsigned int max_component_name_len;
@property (retain) NSString *file_system_name;
@property unsigned int fstype;
@property unsigned int isEncrypted;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)statfs_lock;
- (void)statfs_unlock;

@end
