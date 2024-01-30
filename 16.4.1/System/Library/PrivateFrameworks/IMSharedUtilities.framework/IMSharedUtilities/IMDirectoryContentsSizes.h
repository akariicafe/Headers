@interface IMDirectoryContentsSizes : NSObject

@property (readonly, nonatomic) struct IMFileSize { unsigned long long file_size; unsigned long long disk_allocation_size; } totalSize;
@property (readonly, nonatomic) struct IMFileSize { unsigned long long file_size; unsigned long long disk_allocation_size; } totalPurgableSize;
@property (readonly, nonatomic) struct IMFileSize { unsigned long long file_size; unsigned long long disk_allocation_size; } totalAttachmentSize;

- (id)initWithDirectoryContents:(id)a0;

@end
