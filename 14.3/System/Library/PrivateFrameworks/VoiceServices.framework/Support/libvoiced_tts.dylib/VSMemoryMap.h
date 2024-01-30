@class NSString;

@interface VSMemoryMap : NSObject

@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) void *mappedData;
@property (readonly, nonatomic) int fd;

- (void).cxx_destruct;
- (BOOL)mmap;
- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (void)madvise;

@end
