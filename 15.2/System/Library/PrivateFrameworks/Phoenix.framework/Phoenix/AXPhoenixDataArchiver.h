@interface AXPhoenixDataArchiver : NSObject

@property (nonatomic) struct archive { } *archiver;

- (id)initWithPath:(id)a0;
- (void)addDirectoryToArchive:(id)a0 withDirName:(id)a1;
- (void)closeArchive;
- (void)addFileToArchive:(id)a0 withFileName:(id)a1;

@end
