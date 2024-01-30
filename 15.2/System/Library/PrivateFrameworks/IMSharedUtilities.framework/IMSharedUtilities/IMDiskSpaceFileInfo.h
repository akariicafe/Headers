@class NSString;

@interface IMDiskSpaceFileInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct IMFileSize { unsigned long long file_size; unsigned long long disk_allocation_size; } fileSize;
@property (readonly, nonatomic) BOOL isAttachment;
@property (readonly, nonatomic) BOOL isPurgableOnDisk;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) NSString *guid;

- (void)log;
- (void).cxx_destruct;
- (void)addLogItems:(id)a0;
- (id)initWithPath:(id)a0 fileSize:(struct IMFileSize { unsigned long long x0; unsigned long long x1; })a1 isDirectory:(BOOL)a2 isAttachment:(BOOL)a3 isSticker:(BOOL)a4 isPurgableOnDisk:(BOOL)a5;
- (id)logString;

@end
