@interface RTArchiver : NSObject {
    struct archive { } *_archive;
    int _archive_fd;
}

@property (nonatomic) BOOL valid;

+ (BOOL)extractArchiveAtURL:(id)a0 error:(id *)a1;

- (id)init;
- (void)dealloc;
- (void)closeArchive;
- (id)initWithOutputURL:(id)a0 compress:(BOOL)a1;
- (void)addDirectoryToArchive:(id)a0;
- (void)addFileToArchive:(id)a0;

@end
